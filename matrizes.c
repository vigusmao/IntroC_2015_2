#include<stdlib.h>
#include<stdio.h>

int** cria_matriz(int n_linhas, int n_colunas);
int** soma_matrizes(int** matrizA, int** matrizB,
                    int n_linhas, int n_colunas);
void imprime_matriz(int** matriz, int n_linhas, int n_colunas);


int** soma_matrizes(int** matrizA, int** matrizB,
                    int n_linhas, int n_colunas) {
    int** resultado = cria_matriz(n_linhas, n_colunas);
    int linha, coluna;
    for (linha=0; linha<n_linhas; linha++) {
        for (coluna=0; coluna<n_colunas; coluna++) {
            resultado[linha][coluna] = matrizA[linha][coluna] +
                                       matrizB[linha][coluna];
        }
    }
    return resultado;
}



void imprime_matriz(int** matriz, int n_linhas, int n_colunas) {
    int linha, coluna;
    for (linha=0; linha<n_linhas; linha++) {
        printf("\n");
        for (coluna=0; coluna<n_colunas; coluna++) {
            printf("%4d  ", matriz[linha][coluna]);
        }
    }
}


int** cria_matriz(int n_linhas, int n_colunas) {
    int** matriz = (int**) malloc(n_linhas * sizeof(int*));
    int linha;
    for (linha=0; linha<n_linhas; linha++) {
        matriz[linha] = (int*) malloc(n_colunas * sizeof(int));
        int coluna;
        for(coluna=0; coluna<n_colunas; coluna++) {
            matriz[linha][coluna] = 0;  // inicializando com zeros
        }
    }
    return matriz;
}


int main() {
    int** minha_matriz = cria_matriz(3, 4);

    //    |   0    1     2    3
    // ___|______________________
    // 0  |  12   45    56    5
    // 1  |   0    0    -1   17
    // 2  |   3   10     0    1

    minha_matriz[0][0] = 12;
    minha_matriz[0][1] = 45;
    minha_matriz[0][2] = 56;
    minha_matriz[0][3] = 5;

    minha_matriz[1][2] = -1;
    minha_matriz[1][3] = 17;

    minha_matriz[2][0] = 3;
    minha_matriz[2][1] = 10;
    minha_matriz[2][3] = 1;

    int** matriz_dobro = soma_matrizes(minha_matriz, minha_matriz,
                                       3, 4);

    imprime_matriz(minha_matriz, 3, 4);
    printf("\n");
    imprime_matriz(matriz_dobro, 3, 4);

    printf("\n");
    return 1;
}

