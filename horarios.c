#include<stdlib.h>
#include<stdio.h>

typedef struct {
    int hora;
    int minuto;
    int segundo;
    int formato12h;  // formato12h==1 --> 12h, formato12h==0 --> 24h
    int manha;  // manha==1 --> AM,  manha==0 --> PM
} HORARIO;

HORARIO calcula_tempo_decorrido(HORARIO* inicio_ptr, HORARIO* fim_ptr) {
    HORARIO resultado;
    resultado.hora = fim_ptr->hora - inicio_ptr->hora;
    resultado.minuto = fim_ptr->minuto - inicio_ptr->minuto;
    if (resultado.minuto < 0) {
        resultado.hora--;
        resultado.minuto += 60;
    }
    resultado.segundo = fim_ptr->segundo - inicio_ptr->segundo;
    if (resultado.segundo < 0) {
        if (resultado.minuto == 0) {
            resultado.hora--;
            resultado.minuto = 60;
        }
        resultado.minuto--;
        resultado.segundo += 60;
    }
    resultado.formato12h = 0;
    return resultado;
}

void converte_horario_12h(HORARIO* h_ptr) {
//    if ((*h_ptr).hora > 12) {
//        (*h_ptr).hora = (*h_ptr).hora - 12;
//    }
    if (h_ptr->hora >= 12) {
        h_ptr->manha = 0;
    } else {
        h_ptr->manha = 1;
    }
    if (h_ptr->hora > 12) {
        h_ptr->hora = h_ptr->hora - 12;
    }
    h_ptr->formato12h = 1;
}

void imprime_bloco(int bloco) {
    if (bloco < 10) {
        printf("0");
    }
    printf("%d", bloco);
}

void imprime_horario(HORARIO h) {
    imprime_bloco(h.hora );
    printf(":");
    imprime_bloco(h.minuto);
    printf(":");
    imprime_bloco(h.segundo);
    if (h.formato12h) {
        if (h.manha) {
            printf(" AM");
        } else {
            printf(" PM");
        }
    }
}

int main() {
    HORARIO horario_inicial;
    horario_inicial.hora = 14;
    horario_inicial.minuto = 3;
    horario_inicial.segundo = 5;
    horario_inicial.formato12h = 0;

    HORARIO horario_final;
    horario_final.hora = 16;
    horario_final.minuto = 0;
    horario_final.segundo = 10;
    horario_final.formato12h = 0;

    printf("\nhorario inicial = ");
    imprime_horario(horario_inicial);
    printf("\nhorario final = ");
    imprime_horario(horario_final);

    printf("\ntempo decorrido = ");
    HORARIO intervalo = calcula_tempo_decorrido(
                        &horario_inicial, &horario_final);
    imprime_horario(intervalo);

    converte_horario_12h(&horario_inicial);

    printf("\nhorario inicial convertido = ");
    imprime_horario(horario_inicial);

    printf("\n\n");
    return 0;
}
