#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int eh_primo_1(int x) {
    int divisor = 2;
    while (divisor < x) {
        if (x % divisor == 0) {
            return 0;
        } else {
            divisor++;
        }
    }
    return 1;
}

int eh_primo_2(int x) {
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

    int numero = 2;
    while (numero <= limite) {
        if (eh_primo_1(numero) == 1) {
            printf("\n%d", numero);
        }
        numero++;
    }

    return 0;
}
