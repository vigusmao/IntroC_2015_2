#include<stdlib.h>
#include<stdio.h>

int main() {
    int x, y, i;
    x = 15;
    y = x;
    y = 16;
    printf("\n%d, %d", x, y);
    int* z;
    z = &y;
    *z = 17;
    printf("\n%d, %d, %d", x, y, *z);
    z = (int*) malloc(sizeof(int));
    *z = 18;
    printf("\n%d, %d, %d", x, y, *z);
    int* z_old = z;
    z = (int*) malloc(5 * sizeof(int));
    z[2] = 19;
    printf("\n");
    for (i = 0; i < 260000; i++) {
        printf("%d", z[i]);
    }
    free(z);
    free(z_old);

    printf("\n");
    return 0;
}
