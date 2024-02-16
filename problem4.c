#include<stdio.h>

int main(){
    int reversed=0,remainder,n,original;

    printf("Enter anyy number: ");
    scanf("%d", &n);

    original= n;

    while(n != 0){
        remainder= n%10;
        reversed= reversed*10 + remainder;
        n/=10;
    }

       if (original == reversed)
        printf("%d is a palindrome.", original);
    else
        printf("%d is not a palindrome.", original);

    return 0;
}