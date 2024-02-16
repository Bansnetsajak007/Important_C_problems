#include<stdio.h>

void sort(int* array, int n){
    int temp;
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<i+1 ; j++){
            //sort in descending order
            // if(array[i] > array[j]){
            //     temp = array[j];
            //     array[j] = array[i];
            //     array[i] = temp;
            // }

            //sorts in ascending order
            if(array[i] < array[j]){
                temp = array[j];
                array[j] = array[i];
                array[i] = temp;
            }
        }
    }

    for(int k=0 ; k<n ; k++){
        printf("%d ", array[k]);
    }
}



int main(){
    int array[] = {60000,45,69,100,34,12,89,22};
    int size = sizeof(array) / sizeof(int);

    sort(array,size);

    return 0; 
}