#include "Ponto.h"
#include <math.h>

Ponto::Ponto()
{
    //ctor
}

Ponto::~Ponto()
{
    //dtor
}

double Ponto::distanciaOrigem(){ //método que calcula a distancia do ponto à origem
    int dist = 0;
    dist = x*x + y*y;
    return sqrt(dist);
}
