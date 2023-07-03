#include <stdio.h>

int sumOfDigits(int number) {
    if (number == 0) {
        return 0;  // Base case: No more digits remaining
    }

    int lastDigit = number % 10;  // Get the last digit
    int remainingDigits = number / 10;  // Remove the last digit

    return lastDigit + sumOfDigits(remainingDigits);  // Recursively sum the remaining digits
}

int main() {
    int number;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    int result = sumOfDigits(number);

    printf("Sum of digits of %d = %d\n", number, result);

    return 0;
}
