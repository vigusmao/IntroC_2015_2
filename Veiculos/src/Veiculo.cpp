#include "Veiculo.h"
#include <iostream>

using namespace std;

int Veiculo::getRodas()
{
    return rodas;
}

void Veiculo::setRodas(int nRodas)
{
    rodas = nRodas;
}

int Veiculo::getPassageiros()
{
    return passageiros;
}

void Veiculo::setPassageiros(int nPassageiros)
{
    passageiros = nPassageiros;
}

double Veiculo::getPeso()
{
    return peso;
}

void Veiculo::setPeso(double novoPeso)
{
    peso = novoPeso;
}

Veiculo::Veiculo()
{
    cout << "construindo um veículo" << endl; //note a ordem de chamada dos construtores
}
Veiculo::Veiculo(int r){
    Veiculo();
    rodas = r;
}

Veiculo::~Veiculo()
{
    //dtor
}

