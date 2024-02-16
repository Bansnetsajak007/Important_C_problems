// 1! + 3! + 5! + ....... N!

#include <stdio.h>

int isPrime(int number) {
    int factor = 0;
    for(int i=1;i<=number;i++){
        if(number % i ==0){
            factor ++;
        }
    }

    if (factor == 2) {
        return 1;
    } else {
        return 0;
    }

}




int fact(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * fact(n - 1);
    }
}   


int sum(int n) {
    int sum = 0;
    

    for (int i = 1; i <= n; i++) {
        if(isPrime(i)){
            sum += fact(i);
        }
    }
    
    return sum;
}


int main() {

    int n;

    printf("Enter the value of N: ");
    scanf("%d", &n);

    printf("%d", sum(n));

    return 0;
}