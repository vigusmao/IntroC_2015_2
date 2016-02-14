#include "Moto.h"
#include <iostream>

using namespace std;

Moto::Moto():Veiculo::Veiculo(2)
{
    cout << "Construindo a moto" << endl; //note a ordem de chamada dos construtores
}

Moto::~Moto()
{
    //dtor
}

