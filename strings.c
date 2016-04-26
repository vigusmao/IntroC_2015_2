#include<stdlib.h>
#include<stdio.h>

int eh_palindromo(char* palavra) {
    int ultima_posicao = strlen(palavra)-1;
    int i;
    for (i=0; i <= ultima_posicao; i++) {
        if (palavra[i] != palavra[ultima_posicao-i]) {
            return 0;  // nao eh palindromo
        }
    }
    return 1;  // eh palindromo
}

void remove_linebreak(char* palavra) {
    int tamanho = strlen(palavra);
    if (palavra[tamanho-1] == '\n') {
        palavra[tamanho-1] = '\0';
    }
}

int main() {
    char* nome = (char*) malloc(10*sizeof(char));  // dinamico
    char sobrenome[10];  // estatico

    fgets(nome, 10, stdin);
    remove_linebreak(nome);
    fflush(stdin);

    printf("\ntamanho = %d", strlen(nome));
    printf("\nnome = %s", nome);
    if (eh_palindromo(nome)) {
        printf("\nEh palindromo!");
    }

    printf("\n");

    fgets(sobrenome, 10, stdin);
    remove_linebreak(sobrenome);
    printf("\ntamanho = %d", strlen(sobrenome));
    printf("\nsobrenome = %s", sobrenome);
    if (eh_palindromo(sobrenome)) {
        printf("\nEh palindromo!");
    }

    free(nome);
    printf("\n");
    return 0;
}
