//exemplo que mostra um relacionamento entre classes
//a classe Ponto é usada como tipo de um atributo da classe Circulo

#include <stdio.h>
#include <iostream>
#include "Ponto.h"
#include "Circulo.h"

using namespace std;

int main()
{

    Ponto p; //instanciando um ponto
    p.x = 3;
    p.y = 4;

    Circulo c; //instanciando um circulo
    c.centro = p; //definindo o centro do circulo como o ponto p
    c.raio = 4;

    printf("Perímetro: %.2f\n", c.retornaPerimetro());
    printf("Distância do centro a origem: %.2f\n", c.distanciaCentroOrigem());


    return 0;
}
