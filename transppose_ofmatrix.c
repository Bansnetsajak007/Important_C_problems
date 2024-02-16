//program to find transpose of matrix

#include<stdio.h>

int main(){
    int i,j;
    int matrix[3][2];
    int transpose[2][3];

    for ( i = 0; i < 3; i++){
        for (j = 0; j < 2; j++){
            printf("Enter the elements at matrix[%d][%d]: ", i,j);
            scanf("%d", &matrix[i][j]);
        }
        printf("\n");
    }

    //calculating transpose
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            transpose[i][j] = matrix[j][i];
        }
    }

    //original matrix
    for ( i = 0; i < 3; i++){
        for (j = 0; j < 2; j++){
            printf("matrix[%d][%d]:%d  ", i,j,matrix[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    for ( i = 0; i < 2; i++){
        for (j = 0; j < 3; j++){
            printf("%d",transpose[i][j]);
        }
        printf("\n");
    }
    
}
