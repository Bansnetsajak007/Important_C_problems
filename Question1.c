//program to sort array of strings

#include <stdio.h>
#include <string.h>

#define MAX_LEN 100
#define MAX_STRINGS 10

void bubble_sort_strings(char *arr, int n);  //function prototype

int main()
{
    char strings[MAX_STRINGS * MAX_LEN];
    int n, i;

    printf("Enter the number of strings (max %d): ", MAX_STRINGS);
    scanf("%d", &n);

    printf("Enter %d strings (max %d characters each):\n", n, MAX_LEN - 1);
    for (i = 0; i < n; i++) {
        scanf("%s", &strings[i * MAX_LEN]);
    }

    bubble_sort_strings(strings, n);

    printf("\nSorted strings:\n");
    for (i = 0; i < n; i++) {
        printf("%s\n", &strings[i * MAX_LEN]);
    }

    return 0;
}

void bubble_sort_strings(char *arr, int n)
{
    int i, j;
    char temp[MAX_LEN];

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (strcmp(&arr[j * MAX_LEN], &arr[(j + 1) * MAX_LEN]) > 0) {
                memcpy(temp, &arr[j * MAX_LEN], MAX_LEN);
                memcpy(&arr[j * MAX_LEN], &arr[(j + 1) * MAX_LEN], MAX_LEN);
                memcpy(&arr[(j + 1) * MAX_LEN], temp, MAX_LEN);
            }
        }
    }
}
