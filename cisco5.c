#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Helper function declarations
char* readline();
char* ltrim(char*);
char* rtrim(char*);
int parse_int(char*);

// Struct to store server info
typedef struct {
    int server_id;
    int severity;
} ServerSeverity;

// Comparison function for sorting
int compare(const void* a, const void* b) {
    ServerSeverity* s1 = (ServerSeverity*)a;
    ServerSeverity* s2 = (ServerSeverity*)b;

    if (s1->severity != s2->severity)
        return s2->severity - s1->severity; // descending severity
    return s1->server_id - s2->server_id;   // ascending server ID
}

// Main logic function
int* sort_servers_by_severity(int alerts_count, int* alerts, int* result_count) {
    int max_servers = 1001;
    int* highest_severity = malloc(max_servers * sizeof(int));
    for (int i = 0; i < max_servers; i++)
        highest_severity[i] = -1;

    // Track highest severity per server
    for (int i = 0; i < alerts_count; i++) {
        int alert = alerts[i];
        int server_id = alert >> 4;
        int severity = alert & 0xF;

        if (severity > highest_severity[server_id]) {
            highest_severity[server_id] = severity;
        }
    }

    // Count active servers
    int count = 0;
    for (int i = 1; i < max_servers; i++) {
        if (highest_severity[i] != -1)
            count++;
    }

    // Fill array of structs
    ServerSeverity* servers = malloc(count * sizeof(ServerSeverity));
    int idx = 0;
    for (int i = 1; i < max_servers; i++) {
        if (highest_severity[i] != -1) {
            servers[idx].server_id = i;
            servers[idx].severity = highest_severity[i];
            idx++;
        }
    }

    // Sort by severity desc, ID asc
    qsort(servers, count, sizeof(ServerSeverity), compare);

    // Prepare result
    int* result = malloc(count * sizeof(int));
    for (int i = 0; i < count; i++) {
        result[i] = servers[i].server_id;
    }

    *result_count = count;

    free(highest_severity);
    free(servers);

    return result;
}

// Entry point
int main() {
    // Alerts in hex format (server_id << 4) | severity
    int alerts[] = {
        0x03E82, // Server 1000, Moderate (2)
        0x01208, // Server 288, Critical (8)
        0x01204, // Server 288, High (4)
        0x01F81, // Server 504, Minor (1)
        0x03E84, // Server 1000, High (4)
        0x01F88  // Server 504, Critical (8)
    };
    int alerts_count = sizeof(alerts) / sizeof(alerts[0]);

    int result_count;
    int* result = sort_servers_by_severity(alerts_count, alerts, &result_count);

    // Print result
    for (int i = 0; i < result_count; i++) {
        printf("%d\n", result[i]);
    }

    free(result);
    return 0;
}

// Helper functions for input
char* readline() {
    size_t alloc_length = 1024;
    size_t data_length = 0;
    char* data = malloc(alloc_length);

    while (true) {
        char* cursor = data + data_length;
        char* line = fgets(cursor, alloc_length - data_length, stdin);
        if (!line) break;

        data_length += strlen(cursor);
        if (data_length < alloc_length - 1 || data[data_length - 1] == '\n') break;

        alloc_length <<= 1;
        data = realloc(data, alloc_length);
        if (!data) return NULL;
    }

    if (data[data_length - 1] == '\n') {
        data[data_length - 1] = '\0';
    }

    return data;
}

char* ltrim(char* str) {
    if (!str) return NULL;
    while (*str && isspace(*str)) str++;
    return str;
}

char* rtrim(char* str) {
    if (!str) return NULL;
    char* end = str + strlen(str) - 1;
    while (end >= str && isspace(*end)) end--;
    *(end + 1) = '\0';
    return str;
}

int parse_int(char* str) {
    char* endptr;
    int value = strtol(str, &endptr, 10);
    if (endptr == str || *endptr != '\0') exit(EXIT_FAILURE);
    return value;
}
