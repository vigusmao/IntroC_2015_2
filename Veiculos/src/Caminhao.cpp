#include "Caminhao.h"
#include <iostream>

using namespace std;

Caminhao::Caminhao()
{
    cout << "Construindo um caminhao" << endl; //note a ordem de chamada dos construtores
}

Caminhao::~Caminhao()
{
    //dtor
}
double Caminhao::getCarga()
{
    return carga;
}

void Caminhao::setCarga(double novaCarga){
    carga = novaCarga;
}
