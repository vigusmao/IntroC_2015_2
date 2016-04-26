#include<stdlib.h>
#include<stdio.h>
#include<time.h>

int sorteie(int a, int b) {
    return rand() % (b-a+1) + a;
}

int main() {
    srand(time(NULL));  // inicializando o gerador de numeros aleatorios

//    int i;
//    for (i=0; i<20; i++) {
//        printf("\n%d", sorteie(1,100));
//    }

    int x, y, cont;

    x = sorteie(1, 100);
    cont = 0;

    printf("\nTente acertar o numero escolhido (de 1 a 100): ");

    while (1) {  // loop infinito
        scanf("%d", &y);
        if (y < 1 || y > 100) {
            printf("\nTchau!");
            break;
        }

        cont++;
        if (y == x) {
            printf("\nAcertou em %d tentativas!", cont);
            break;
        }
        if (y < x) {
            printf("Muito baixo! Tente de novo: ");
        } else {
            printf("Muito alto! Tente de novo: ");
        }
    }

    printf("\n");
    return 0;
}
