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

void inicializar_horario(HORARIO* h_ptr) {

    h_ptr->hora = 0;   // ou   (*h_ptr).hora = 0;
    h_ptr->minuto = 0;
    h_ptr->segundo = 0;
    h_ptr->formato12h = 0;
    h_ptr->manha = 0;
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
    int i;
    int n_horarios;
    printf("Quantos horarios? ");
    scanf("%d", &n_horarios);

    // array dinamico de horarios
    HORARIO* meus_horarios;
    meus_horarios = (HORARIO*) malloc(n_horarios * sizeof(HORARIO));

    for (i = 0; i < n_horarios; i++) {
        inicializar_horario(&meus_horarios[i]);
        printf("Digite o horario (hh:mm:ss) --> ");
        scanf("%d:%d:%d",
              &(meus_horarios[i].hora),
              &(meus_horarios[i].minuto),
              &(meus_horarios[i].segundo));
        if (meus_horarios[i].hora < 0) {
            break;
        }
        converte_horario_12h(&meus_horarios[i]);
    }

    for (i = 0; i < n_horarios; i++) {
        if (meus_horarios[i].hora < 0) {
            break;
        }
        imprime_horario(meus_horarios[i]);
        printf("\n");
    }

    free(meus_horarios);

    printf("\n\n");
    return 0;
}
