#include<stdlib.h>
#include<stdio.h>


int main() {
    int aluno = 1;

    while(1) {
        float p1, p2, m;

        scanf("%f %f", &p1, &p2);
        if (p1 < 0) {
            break;
        }

        m = (p1+p2)/2;
        printf("aluno %d, notas: %.1f e %.1f, media: %.1f\n",
               aluno++, p1, p2, m);
    }

    printf("\n\n");
    return 0;
}
