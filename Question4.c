//swapping two variables without using dummy variable

#include <stdio.h>

int main() {
    int a = 10;
    int b = 20;

    printf("Before swapping: a = %d, b = %d\n", a, b);

    a = a + b; // add a and b and assign the result to a
    b = a - b; // subtract b from the new value of a and assign the result to b
    a = a - b; // subtract the new value of b from the new value of a and assign the result to a

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}

