#include <stdio.h>

int largest_(int* array, int n) {
    int* ptr = array;
    int largest = *ptr;

    for (int i = 0; i < n; i++) {
        if (*(ptr + i + 1) > largest) {
            largest = *(ptr + i + 1);
        }
    }

    return largest;
}

//main logic to find second largest number of an array
int second_largest(int* array, int n) {
    int j;
    int new_array[n];
    
    int res = largest_(array,n);

    for (j = 0; j < n; j++) {
        if (array[j] != res) {
            new_array[j] = array[j];
        }
    }


    printf("Second largest element: %d\n", largest_(new_array, j+1));
}

int main() {
    int array[] = {6, 45, 690, 100, 34};
    int size = sizeof(array) / sizeof(int);

    second_largest(array, size);

    return 0;
}
