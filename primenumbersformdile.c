// Suppose a file named “Num.txt” contains a list of integers.
//  Write a program to extract the prime numbers only from that file and write them on “Prime.txt” file.



#include<stdio.h>

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

int main(){

    int j,sum = 0;
    FILE* file = NULL;
    FILE* fp = NULL;


    file = fopen("Numbers.txt", "r");
    fp = fopen("primes.txt", "w");


    while (!feof(file)) {
        int num;
        if (fscanf(file, "%d", &num) == 1) {
            if(isPrime(num)){
                fprintf(fp,"%d\n", num);
            }
        }
    }



    fclose(file);
    fclose(fp);


    
    return 0;
}