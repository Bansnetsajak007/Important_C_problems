//transpose of matrix using DMA

#include <stdio.h>
#include <stdlib.h>

int main() {
    int rows, columns;
    int** arr;
    
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &columns);
    
    // Allocate memory for the rows
    arr = (int**) malloc(rows * sizeof(int*));
    
    // Allocate memory for each column in each row
    for (int i = 0; i < rows; i++) {
        arr[i] = (int*) malloc(columns * sizeof(int));
    }
    
    int transpose[columns][rows];
    
    
    // Initialize the array
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("Array[%d][%d]", i,j);
            scanf("%d", &arr[i][j]);
        }
    }
    
    
    // calculating transpose of matix
    for (int i = 0; i < columns; i++) {
        for (int j = 0; j < rows; j++) {
            transpose[i][j] = arr[j][i];
        }
    }
    
    
    // Print the array
    printf("2D Array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    
    printf("Transpose:\n");
    for (int i = 0; i < columns; i++) {
        for (int j = 0; j < rows; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
        
    }
    
    // Free the allocated memory
    for (int i = 0; i < rows; i++) {
        free(arr[i]);
    }
    free(arr);
    
    return 0;
}

