#include<stdio.h>

void sum_first_last(int* array, int n){
    int sum = 0,i;
    int* first = array;  //giving addreass of first element
    int count = 0;
    
    int* last = array + (n - 1);  // Pointer to the last element

    sum = *first + *last;

    printf("%d", sum);

}



int main(){

    int array[] = {60,45,69,100,34,12,89,9};
    int size = sizeof(array) / sizeof(int);

    sum_first_last(array,size);

    return 0;
}