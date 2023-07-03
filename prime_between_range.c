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

void findPrimesInRange(int start, int end) {
    printf("Prime numbers between %d and %d are: ", start, end);

    for (int i = start; i <= end; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }

    printf("\n");
}

int main() {
    int start, end;

    printf("Enter the starting range: ");
    scanf("%d", &start);

    printf("Enter the ending range: ");
    scanf("%d", &end);

    findPrimesInRange(start, end);

    return 0;
}
