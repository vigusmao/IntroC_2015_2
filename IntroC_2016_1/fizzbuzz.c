#include<stdlib.h>
#include<stdio.h>

int main() {

    int x=1;
    while (x<=1000) {
        int imprimi_algo = 0;
        if (x%3==0) {
            printf("fizz");
            imprimi_algo = 1;
        }
        if (x%5==0) {
            printf("buzz");
            imprimi_algo = 1;
        }
        if (imprimi_algo==0) {
            printf("%d", x);
        }
        printf("\n");
        x++;
    }
    return 0;
}
