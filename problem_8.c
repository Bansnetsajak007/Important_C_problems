#include<stdio.h>
#include<stdlib.h>


void compare(int* a,int a_size,int* b,int b_size){
    int x=0;
    int y=0;
    int* arr = malloc(2 * sizeof(int));
    
    for(int i=0;i<a_size;i++){
        if(a[i]>b[i]){
            x+=1;
        }
        else if (a[i]<b[i]) {
        y+=1;
        }   
    }
    for (int j=0; j<sizeof(arr); j++) {
        arr[j] = x;
        arr[j+1] = y;
    } 
    
    for(int i=0;i<sizeof(arr)/2;i++){
        printf("%d ", arr[i]);
    }
}

int main(){
    int a[100];
    int b[100];
    int a_count =3;
    int b_count =3;

    for(int i=0;i<=a_count;i++){
        scanf("%d", &a[i]);
    }

        for(int i=0;i<=b_count;i++){
        scanf("%d", &b[i]);
    }
        
    
    compare(a, a_count, b,  b_count);
    return 0;
}