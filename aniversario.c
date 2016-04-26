#include<stdlib.h>
#include<stdio.h>
#include<time.h>

int sorteie(int a, int b) {
    return rand() % (b-a+1) + a;
}

int simular_aniversarios_naive(int n_pessoas) {
// retorna 1, se houver 3 aniversarios coincidentes
// retorna 0, caso contrario
    int* aniversarios = (int*) malloc(n_pessoas * sizeof(int));
    int i, j, k;
    for (i=0; i<n_pessoas; i++) {
        int aniversario = sorteie(1, 365);
        aniversarios[i] = aniversario;
    }
    for (i=0; i<n_pessoas; i++) {
        for (j=i+1; j<n_pessoas; j++) {
            for (k=j+1; k<n_pessoas; k++) {
                if (aniversarios[i] == aniversarios[j] &&
                    aniversarios[i] == aniversarios[k]) {
                    free(aniversarios);
                    return 1;  // Encontrei tres aniversarios iguais!
                }
            }
        }
    }
    free(aniversarios);
    return 0;  // Nao encontrei tres iguais!
}

int simular_aniversarios(int n_pessoas) {
// retorna 1, se houver aniversarios coincidentes
// retorna 0, caso contrario
    int dias[366];
    int i;
    for (i=0; i<366; i++) {  // inicializando o array com zeros
        dias[i] = 0;
    }
    for (i=0; i<n_pessoas; i++) {
        int aniversario = sorteie(1, 365);
        dias[aniversario]++;
        if (dias[aniversario] == 3) {
            return 1;  // Ja descobri que tem tres caras no mesmo dia!
        }
    }
    return 0;  // Nao ha tres caras no mesmo dia!
}

int main() {
    srand(time(NULL));

    int repeticoes = 1000000;
    int cont_sucessos = 0;
    int i;
    for (i=0; i<repeticoes; i++) {
        cont_sucessos += simular_aniversarios(40);
    }
    float prob = 1.0 * cont_sucessos / repeticoes;
    printf("\nProbabilidade = %f", prob);

    printf("\n");
    return 0;
}
