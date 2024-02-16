//program to find sum of 3*2 matrix

#include <stdio.h>

int main() {
    int matrix[3][2] = {{10, 5},
                        {5, 2},
                        {3, 2}};
    int rowSum[3] = {0};

/*Main logic*/
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            rowSum[i] += matrix[i][j];
        }
    }
/*Main logic*/

    printf("Sum of each row:\n");
    for (int i = 0; i < 3; i++) {
        printf("Row %d: %d\n", i + 1, rowSum[i]);
    }

    return 0;
}
