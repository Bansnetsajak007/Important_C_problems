//reversing the array elements using pointer and dynamic mameory allocation

#include<stdio.h>
#include<stdlib.h>

void reverse(int*, int);


int main(){
    int size;
    int* arr;

    printf("Enter the size of array: ");
    scanf("%d", &size);

    arr = (int*) malloc(size * sizeof(int));

    for(int i=0;i<size;i++){
        printf("Enter elements at %d: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Array of elements before reverse are\n");
    for(int i=0;i<size;i++){
        printf("%d ", arr[i]);
    }

    printf("\n");

    printf("Array of elements after reverse are\n");
    reverse(arr,size);

    free(arr);
    
    return 0;
}


void reverse(int* array, int n){

    //giving address of last element of array array
    int* last = array + (n - 1);


    for(int i=0;i<n;i++){
        printf("%d ", *(last));
        last--;
    }

    printf("\n");
}

