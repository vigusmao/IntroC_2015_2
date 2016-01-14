#include<stdlib.h>
#include<stdio.h>

long long unsigned int fib_recursivo(int x) {
    if (x<=2) {
        return 1;
    }
    return fib_recursivo(x-1) + fib_recursivo(x-2);
}

long long unsigned int fib_nao_recursivo(int x) {
    long long unsigned int a=1, b=1, aux;
    int i;
    for (i=2; i<=x; i++) {
        aux = b;
        b = a+b;
        a = aux;
        // ao fim de cada iteracao,
        // o valor de b serah o i-esimo elemento da seq
        // de fibonacci
    }
    return b;
}

int main() {
    int x;
    for (x=1; x<=80; x++) {
        printf("\nfib(%d) = %llu", x, fib_nao_recursivo(x));
    }

    printf("\n");
    return 0;
}
