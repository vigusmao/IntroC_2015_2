#include "Pessoa.h"
#include <iostream>
#include <string>
using namespace std;

Pessoa::Pessoa(string _nome, int _idade)
{
    //cout << "Construindo uma Pessoa " << endl;
    nome = _nome;
    idade = _idade;
}

Pessoa::~Pessoa()
{
    //dtor
}
string Pessoa::getNome()
{
    return nome;
}

void Pessoa::setNome(string _nome)
{
    nome = _nome;
}

int Pessoa::getIdade()
{
    return idade;
}

void Pessoa::setIdade(int _idade)
{
    idade = _idade;
}

void Pessoa::dizOi()
{
    cout << "Ola, meu nome é " << nome << " e tenho " << idade << " anos " << endl;
}

double Pessoa::valorXerox(int qtd)
{
    return 0.10 * qtd;
}

