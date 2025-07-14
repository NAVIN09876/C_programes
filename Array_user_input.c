#include <stdio.h>
int main() {
    int name[10];
    int size = sizeof(name) / sizeof(name[0]); // same for all data types
    for(int i = 0; i < size; i++) {
        scanf("%d", &name[i]); 
    }
    for(int i = 0; i < size; i++) {
        printf("%d ", name[i]);
    }

    return 0;
}
