#include<stdlib.h>
#include<stdio.h>
#include<time.h>

int joga_dado() {
    return rand() % 6 + 1;
}

int main() {
    srand(time(NULL));  // inicializando o gerador de numeros aleatorios

    int i, total = 0;
    int repeticoes = 10000000;

    for (i=0; i<repeticoes; i++) {
        int dado1 = joga_dado();
        int dado2 = joga_dado();
        int soma = dado1 + dado2;
        total += soma;
    }

    float media = (1.0 * total) / repeticoes;
    printf("\nMedia = %.8f", media);

    printf("\n");
    return 0;
}
