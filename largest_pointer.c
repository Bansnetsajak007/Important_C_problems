//finding largest element from array using pointer

#include<stdio.h>

void largest(int* array, int n){
    int* ptr = array;
    int largest_ = *ptr;



    for (int i = 0; i < n; i++){
        if(*(ptr) > largest_){
            largest_ = *(ptr);
        }    
        ptr++;
    }
    
    printf("Largest = %d", largest_);
}


int main(){
    int array[] = {6,45,69,100,34,12,890,222};
    int size = sizeof(array) / sizeof(int);

    largest(array,size);

    return 0; 
}