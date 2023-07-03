// 1! + 3! + 5! + ....... N!

#include <stdio.h>

int isPrime(int number) {
    if (number <= 1) {
        return 0;  // Not prime
    }

    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) {
            return 0;  // Not prime
        }
    }

    return 1;  // Prime
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