#include<stdlib.h>

int main() {
    while(1) {
        float p1, p2, m;

        printf("\nDigite a nota da P1: ");
        scanf("%f", &p1);
        if (p1 < 0) {
            break;
        }
        printf("Digite a nota da P2: ");
        scanf("%f", &p2);
        if (p2 < 0) {
            break;
        }

        m = (p1+p2)/2;

        if (m >= 6) {
            printf("Parabens, aprovado com media %.1f", m);
        }
        if (m < 3) {
            printf("Lamento, reprovado com media %.1f", m);
        }
        if (m >= 3 && m < 6) {
            printf("Sua media foi %.1f e voce precisa de %.1f na PF",
                   m, 10-m);
        }

    }

    printf("\n\n");
    return 0;
}
