//convert binary of inputed decimal number
// using of modulas operator

#include<stdio.h>

void bin(int n){
    int binary[20],i=0;

        while (n > 0) {
        binary[i] = n % 2;
        n /= 2;
        i++;
    }

    printf("Binary equivalent: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }

    printf("\n");
}



int main(){
    int n;
    printf("Enter any positive number: ");
    scanf("%d", &n);

    bin(n);


    return 0;
}