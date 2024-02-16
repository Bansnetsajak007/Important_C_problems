#include<stdio.h>

int main(){
 
    int l,b;

    printf("Enter the length of rectangle: ");
    scanf("%d", &l);

    printf("Enter the breadth of rectangle: ");
    scanf("%d", &b);   

    int area= l*b;
    int perimeter = 2*(l+b);

    printf("The are of rectangle is %d and perimeter is %d", area, perimeter);

    return 0;
}