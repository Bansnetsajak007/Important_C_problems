// Program to input two binary numbers and calculate their sum in binary
// 10 + 10  ---->  100


#include<stdio.h>


int poW(int base, int power){
    int result = 1;
    for(int i = 1;i<=power;i++){
        result *= base;
    }

    return result;
}

int length(int number){
    int count = 0;

    while(number != 0){
        int rem = number % 10;
        count ++;
        number /= 10;
    }

    return count;
}

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

int dec(int b_num){
    int s_digit,result = 1;
    int decimal = 0,i = 0;

         while (b_num!=0) {
            s_digit = b_num % 10;
            b_num /= 10;
            decimal += s_digit * poW(2, i);
            i++;
        }
    return decimal;
}

int main(){
    int binary1,binary2;
    int sum = 0;
    printf("Enter first binary number: ");
    scanf("%d", &binary1);

    printf("Enter second binary number: ");
    scanf("%d", &binary2);

    sum = dec(binary1) + dec(binary2);

    bin(sum);

    return 0;
}