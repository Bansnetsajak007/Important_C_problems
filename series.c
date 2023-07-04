
// 1/x - 1/x^2 -1/x^3 -1/x^4 + ..... N

#include<stdio.h>
#include<math.h>

void series_calculation(int constant, int n){
    float result = 0;
    for(int i=1 ; i<=n ; ++i){

        if(i>=2 && i<=4){
            result -= pow((1/ (float)constant),i);
        }

        else{
            result +=  pow((1/(float)constant),i);
        }
    }

    printf("The finite result = %.5f", result);
}

int main(){
    int x,n;

    
    printf("Up to how many terms you want to calculate the series(N term): ");
    scanf("%d", &n);

    printf("Enter the value of X:");  //which is constant
    scanf("%d", &x);

    series_calculation(x,n);
}