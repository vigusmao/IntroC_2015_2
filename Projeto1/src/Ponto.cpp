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

double Ponto::distanciaOrigem(){ //m�todo que calcula a distancia do ponto � origem
    int dist = 0;
    dist = x*x + y*y;
    return sqrt(dist);
}
