//program to generate this pattern
// 5
// 54
// 543
// 5432
// 54321


#include <stdio.h>

int main()
{
    int i, j;
    int n = 5; // number of rows

    for (i = n; i >= 1; i--) {
        for (j = n; j >=i ; j--) {
            printf("%d ",j);
        }
        printf("\n");
    }

    return 0;
}
