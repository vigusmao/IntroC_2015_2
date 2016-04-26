#include<stdlib.h>
#include<stdio.h>

typedef long long unsigned int LLUI;

LLUI fib_recursivo(int x, LLUI* memo) {
    if (memo[x] != -1) {
        // Ja conheo a resposta para o parametro x, isto eh, fib(x)
        return memo[x];
    }
    LLUI resultado;
    if (x<=2) {
        resultado = 1;
    } else {
        resultado = fib_recursivo(x-1, memo) +
                    fib_recursivo(x-2, memo);
    }
    memo[x] = resultado;
    return resultado;
}

LLUI fib_nao_recursivo(int x) {
    LLUI a=1, b=1, aux;
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
    int MAIOR_VALOR = 1000;

    // criando e inicializando o memo (tecnica da memoizacao)
    LLUI* memo = (LLUI*) malloc((MAIOR_VALOR+1) * sizeof(LLUI));
    int i;
    for (i=0; i<=MAIOR_VALOR; i++) {
        memo[i] = -1;  // usaremos -1 para indicar desconhecimento
    }

    int x;
    for (x=1; x<=MAIOR_VALOR; x++) {
        printf("\nfib(%d) = %llu", x, fib_recursivo(x, memo));
    }

    printf("\n");
    return 0;
}
