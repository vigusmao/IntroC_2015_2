#include<stdlib.h>
#include<stdio.h>

int main() {

    int x=1;
    while (x<=1000) {
        if (x%3==0 && x%5==0) {
            printf("fizzbuzz");
        } else if (x%3==0) {
            printf("fizz");
        } else if (x%5==0) {
            printf("buzz");
        } else {
            printf("%d", x);
        }
        printf("\n");
        x++;
    }
    return 0;
}
