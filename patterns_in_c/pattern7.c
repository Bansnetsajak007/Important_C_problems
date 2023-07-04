
/*
5 
5 4 
5 4 3 
5 4 3 2 
5 4 3 2 1 
*/


#include<stdio.h>

int main(){
    int flag = 5;
    for(int i=0;i<5;i++){
        for(int j = 0;j<i+1;j++){
            printf("%d ",flag-j);
        }
        printf("\n");
    }
    return 0;
}