# C Program to Draw rectangle

```
#include <graphics.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    int left = 100;
    int top = 100;
    int right = 300;
    int bottom = 200;

    setcolor(YELLOW);
    rectangle(left, top, right, bottom);

    getch();
    closegraph();

    return 0;
}

```

# C Program to Draw circle

```
#include <graphics.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    int x = 250;
    int y = 250;
    int radius = 100;

    setcolor(YELLOW);
    circle(x, y, radius);

    getch();
    closegraph();

    return 0;
}

```

# C Program to Draw line

```
#include <graphics.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    int x1 = 100;
    int y1 = 100;
    int x2 = 300;
    int y2 = 200;

    setcolor(RED);
    line(x1, y1, x2, y2);

    getch();
    closegraph();

    return 0;
}

```


# C Program to allocate memory for 2-D array

```
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
    

```