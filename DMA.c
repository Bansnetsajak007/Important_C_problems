#include <stdio.h>
#include <stdlib.h>

int main() {
    int size;
    int *arr;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

/*

calloc() gives you a zero-initialized buffer, while malloc() leaves the memory uninitialized.
*/

    arr = (int*) malloc(size * sizeof(int));
    // arr = (int*) calloc(size , sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed. Exiting...\n");
        return 1;
    }

    // printf("Enter %d integers:\n", size);
    // for (int i = 0; i < size; i++) {
    //     scanf("%d", &arr[i]);
    // }

    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Free the dynamically allocated memory
    free(arr);

    return 0;
}
