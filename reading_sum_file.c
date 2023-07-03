#include<stdio.h>

int main(){

    int j,sum = 0;
    FILE* file = NULL;

    file = fopen("Numbers.txt", "w");

    for(int i=1;i<=10;i++){
        fprintf(file,"%d\n", i);
    }    

    fclose(file);

    file = fopen("Numbers.txt", "r");


    while (!feof(file)) {
        int num;
        if (fscanf(file, "%d", &num) == 1) {
            if(num % 2 == 0){
                sum += num;
            }
        }
    }

    printf("sum = %d",sum);
    

    fclose(file);


    
    return 0;
}