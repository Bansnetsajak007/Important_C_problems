// WAP in c to display all the numbers divisible by 2 from 30 to 1.

#include <stdio.h>

int main() {
    int count = 0;
    // int *div_two = NULL;  //pointer to an empty array
    int div_two[100];
    for(int i=1;i<=30;i++){
        if(i % 2 == 0){
            div_two[count+i] = i;
            count ++;
        }
    }

    printf("%d\n", count);
    
    for(int j = 0;j<count;j++){
        printf("%d ", div_two[j]);
    }
    return 0;
}