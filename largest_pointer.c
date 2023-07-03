//finding largest element from array using pointer

#include<stdio.h>

void largest(int* array, int n){
    int* ptr = array;
    int largest = *ptr;

    
    for (int i = 0; i < n; i++){
        if(*(ptr + i + 1) > largest){
            largest = *(ptr + i + 1);
        }    
    }
    
    printf("Largest = %d", largest);
}


int main(){
    int array[] = {6,45,69,100,34,12,89,222};
    int size = sizeof(array) / sizeof(int);

    largest(array,size);

    return 0; 
}