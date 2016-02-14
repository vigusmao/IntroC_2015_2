#include "Circulo.h"
#define PI 3.14

Circulo::Circulo()
{
    //ctor
}

Circulo::~Circulo()
{
    //dtor
}

double Circulo::retornaPerimetro(){
    double perimetro;
    perimetro = 2*PI*raio;

    return perimetro;
}

double Circulo::distanciaCentroOrigem(){
    double dist;

    dist = centro.distanciaOrigem(); //exemplo de reutilização de código. Reutilizando o método implementado na classe ponto

    return dist;
}
