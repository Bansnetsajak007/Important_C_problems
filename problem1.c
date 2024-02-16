#include<stdio.h>

int main(){
    float pi= 3.142857;
    int radius;

    printf("Enter radius of cicle: ");
    scanf("%d", &radius);

    float area= pi * radius*radius;
    float perimeter = 2*pi*radius;

    printf("The are of circle is %f and perimeter is %f", area, perimeter);

    return 0;
}