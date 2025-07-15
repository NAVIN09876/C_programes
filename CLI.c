#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// ------- Command Handler Prototypes -------
void cmd_show(char *args);
void cmd_set(char *args);
void cmd_help(char *args);
void cmd_exit(char *args);

// ------- Command Table Structure -------
typedef struct {
    char *name;
    void (*handler)(char *);
    char *help;
} cli_command_t;

// ------- Command Table -------
cli_command_t commands[] = {
    {"show", cmd_show, "Show system status"},
    {"set", cmd_set, "Set system configuration"},
    {"help", cmd_help, "Display help"},
    {"exit", cmd_exit, "Exit the CLI"},
    {NULL, NULL, NULL}
};

// ------- Command Handlers -------
void cmd_show(char *args) {
    if (!args) {
        printf("Usage: show <option>\n");
        return;
    }

    if (strcmp(args, "version") == 0) {
        printf("CLI Version 1.0.0\n");
    } else if (strcmp(args, "interfaces") == 0) {
        printf("eth0: UP\neth1: DOWN\n");
    } else {
        printf("Unknown show option: %s\n", args);
    }
}

void cmd_set(char *args) {
    if (!args) {
        printf("Usage: set <parameter> <value>\n");
        return;
    }

    char *param = strtok(args, " ");
    char *value = strtok(NULL, " ");

    if (!value) {
        printf("Missing value for parameter: %s\n", param);
        return;
    }

    if (strcmp(param, "hostname") == 0) {
        printf("Hostname set to: %s\n", value);
    } else {
        printf("Unknown parameter: %s\n", param);
    }
}

void cmd_help(char *args) {
    printf("Available commands:\n");
    for (int i = 0; commands[i].name != NULL; i++) {
        printf("  %-10s - %s\n", commands[i].name, commands[i].help);
    }
}

void cmd_exit(char *args) {
    printf("Exiting CLI. Goodbye!\n");
    exit(0);
}

// ------- Prompt Function -------
void print_prompt() {
    printf("mycli> ");
}

// ------- Parse and Execute Function -------
void parse_and_execute(char *input) {
    // Remove trailing newline
    input[strcspn(input, "\n")] = '\0';

    // Trim leading spaces
    while (isspace((unsigned char)*input)) input++;

    if (strlen(input) == 0) return;

    char *cmd = strtok(input, " ");
    char *args = strtok(NULL, "\n");

    for (int i = 0; commands[i].name != NULL; i++) {
        if (strcmp(cmd, commands[i].name) == 0) {
            commands[i].handler(args);
            return;
        }
    }

    printf("Unknown command: %s\nTry 'help' to see available commands.\n", cmd);
}

// ------- Main Function (CLI Loop) -------
int main() {
    char input[256];

    while (1) {
        print_prompt();
        if (fgets(input, sizeof(input), stdin) == NULL)
            break;
        parse_and_execute(input);
    }

    return 0;
}
