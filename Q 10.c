#include <stdio.h>

int main() {
    int grid[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    int *p = &grid[0][0];
    int *q = &grid[1][0];

    printf("Pointer arithmetic: %d %d %d\n", *(p+0), *(p+5), *(p+10));

    printf("Mixed indexing: %d %d %d %d\n", q[0], q[1], q[-1], q[3]);

    printf("Divisible by 3: ");
    for(int i=0; i<12; i++)
        if(*(p+i) % 3 == 0)
            printf("%d ", *(p+i));
    printf("\n");

    int *last = *grid + 11;
    printf("Last element: %d\n", *last);

    return 0;
}
