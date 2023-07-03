#include <stdio.h>

void bin(int n) {

    int binary[10],i=0;
    
    while(n > 0){

        binary[i] = n % 2;
        i+=1;
        n/=2;
    }

    for(int j=i-1;j>=0;j--){
        printf("%d ", binary[j]);
        }
}



int main() {
    
    bin(4);

    return 0;
}