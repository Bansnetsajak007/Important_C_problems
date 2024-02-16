// shittiest code ever written

#include<stdio.h>

void filter(int* array,int size){

    int result[size];
    int oddIndex = 0;
    int evenIndex = size - 1;

    for(int i = 0; i < size; i++){
        if(array[i] % 2 != 0){
            result[oddIndex] = array[i];
            oddIndex++;
        } else {
            result[evenIndex] = array[i];
            evenIndex--;
        }
    }

    //printing the array
    for (int k = 0; k < size; k++){
        printf("%d\t", result[k]);
    }
}
    // int result[size];
    // int count = 0;

    // for(int i=0;i<size;i++){
    //     if(array[i] % 2 != 0){
    //         result[i] = array[i];
    //         count++;
    //     }
    // }

    // for (int j = count, index = 0; j < size; j++, index++){
    //     if(array[index] % 2 == 0){
    //         result[j] = array[index];
    //     }
    // }

    // //printing the array
    // for (int k = 0; k < size; k++)
    // {
    //     printf("%d\t" , result[k]);
    // }
    


int main(){
    int array[] = {6,8,7,10,11,30};
    int size = 6;

    filter(array,size);

}