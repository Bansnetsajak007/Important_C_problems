#include<stdio.h>

void sort(int* arr, int size){
    int i=0,j,temp;
    while (i<size-1){
        for(j=0;j<size-i-2;j++){
            // if(*(arr)>*(arr)+1){
            //     temp = *(arr);
            //     *(arr) = *(arr)+1;
            //     *(arr)+1 = temp;
                if(*(arr+j) > *(arr+j+1)){
                    temp = *(arr+j);
                    *(arr+j) = *(arr+j+1);
                    *(arr+j+1) = temp;
            }
        }
        // arr++;
        i++;
    }
    
}

void bubble_sort(int* arr, int size){
    int i=0,j,temp;
    while (i<size-1){
        arr = arr - i; // reset arr pointer to beginning of array
        for(j=0;j<size-i-1;j++){
            if(*(arr+j) > *(arr+j+1)){
                temp = *(arr+j);
                *(arr+j) = *(arr+j+1);
                *(arr+j+1) = temp;
            }
        }
        i++;
        arr++;
    }  
}


int main(){
    int Array[] = {2,4,1,16,7,0};

    int size = sizeof(Array) / sizeof(int);

    sort(Array,size);

    printf("The sorted array: \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", Array[i]);
    }
    
}