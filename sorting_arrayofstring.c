#include <stdio.h>
#include <string.h>

#define MAX_STRINGS 5
#define MAX_LENGTH 100

void bubbleSort(char arr[][MAX_LENGTH], int n) {
    int i, j;
    char temp[MAX_LENGTH];

    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (strcmp(arr[j], arr[j+1]) > 0) {
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[j+1]);
                strcpy(arr[j+1], temp);
            }
        }
    }
}

int main() {
    char strings[MAX_STRINGS][MAX_LENGTH] = {
        "Hello",
        "World",
        "C",
        "Programming",
        "Example"
    };

    int i;

    printf("Before sorting:\n");
    for (i = 0; i < MAX_STRINGS; i++) {
        printf("%s\n", strings[i]);
    }

    bubbleSort(strings, MAX_STRINGS);

    printf("After sorting:\n");
    for (i = 0; i < MAX_STRINGS; i++) {
        printf("%s\n", strings[i]);
    }

    return 0;
}
