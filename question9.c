//convert inputed binary number into decimal number
// 100 -----> 4

#include<stdio.h>

int poW(int base, int power){
    int result = 1;
    for(int i = 1;i<=power;i++){
        result *= base;
    }

    return result;
}

int dec(int b_num){
    int s_digit,result = 1;
    int decimal = 0,i = 0;

         while (b_num!=0) {
            s_digit = b_num % 10;
            decimal += s_digit * poW(2, i);
            b_num /= 10;
            i++;
        }
    return decimal;
}

int main(){
    int n,result;
    printf("Enter any binary number: ");
    scanf("%d", &n);

    result = dec(n);

    printf("%d", result);


    return 0;
}