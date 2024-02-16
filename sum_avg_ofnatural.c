//program to find sum and average of n natural number

#include<stdio.h>

int sum_of_natural(int num){
    int sum = 0;

    for (int i = 1; i <= num; i++){
        sum += i;    
    }

    return sum;
    
}


int avg_of_natural(int num,int total_sum){
    
    return((total_sum) / num);
}


int main(){
    int n,sum_natural = 0;

    printf("Enter valu of n: ");
    scanf("%d", &n);

    sum_natural = sum_of_natural(n);

    printf("The sum up to %d is %d ", n,sum_natural);
    printf("\n");
    printf("The average up to %d is %d ", n,avg_of_natural(n,sum_natural));
}
