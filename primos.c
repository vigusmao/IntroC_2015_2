#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int eh_primo_1(int x) {
    /* Testa divisibilidade por todos os inteiros
       entre 2 e o antecessor de x
    */

    int divisor = 2;
    while (divisor < x) {
        if (x % divisor == 0) {
            return 0;  // nao eh primo!
        } else {
            divisor++;
        }
    }
    return 1;  // eh primo!
}

int eh_primo_2(int x) {
    /* Testa divisibilidade por todos os inteiros
       entre 2 e a metade de x
    */

    int divisor = 2;
    while (divisor <= x/2) {
        if (x % divisor == 0) {
            return 0;
        } else {
            divisor++;
        }
    }
    return 1;
}

int eh_primo_3(int x) {
    /* Testa divisibilidade por todos os inteiros
       entre 2 e a raiz quadrada de x
     */

    int divisor = 2;
    while (divisor <= sqrt(x)) {
        if (x % divisor == 0) {
            return 0;
        } else {
            divisor++;
        }
    }
    return 1;
}

int eh_primo_4(int x) {
    /* Testa divisibilidade por 2 e por todos os inteiros
       impares entre 3 e a raiz quadrada de x
    */

    if ((x != 2) &&
        (x % 2 == 0)) {
        return 0;
    }

    int divisor = 3;
    while (divisor <= sqrt(x)) {
        if (x % divisor == 0) {
            return 0;
        } else {
            divisor += 2;
        }
    }
    return 1;
}

int main() {
    printf("\nDigite o limite: ");
    int limite;
    scanf("%d", &limite);

    int contador_de_primos = 0;
    int numero = 2;
    while (numero <= limite) {
        if (eh_primo_1(numero) == 1) {
            contador_de_primos++;
        }
        numero++;
    }

    printf("\nExistem %d primos menores ou iguais a %d\n",
           contador_de_primos, limite);

    return 0;
}
