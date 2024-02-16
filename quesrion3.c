//finding sum of all digits of long inputed integer using recursion
// 123 ----> 1+2+3

#include <stdio.h>

int sum_digits(long n);

int main() {
    long num;
    printf("Enter a long integer: ");
    scanf("%ld", &num);
    int sum = sum_digits(num);
    printf("The sum of digits is: %d", sum);
    return 0;
}

int sum_digits(long n) {
    if (n == 0) {
        return 0;
    } else {
        return (n % 10) + sum_digits(n / 10);
    }
}

