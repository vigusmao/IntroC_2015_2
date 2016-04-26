#include "Funcionario.h"
#include <iostream>
#include <string>
using namespace std;

Funcionario::Funcionario(string _nome, int _idade):Pessoa::Pessoa(_nome, _idade)
{
    //cout << "Construindo um Funcionário " << endl;
}

Funcionario::Funcionario(string _nome, int _idade, double _salario):Pessoa::Pessoa(_nome, _idade) //passando os parâmetros para o construtor da classe base
{
    salario = _salario;
}

Funcionario::~Funcionario()
{
    //dtor
}
double Funcionario::getSalario()
{
    return salario;
}

void Funcionario::setSalario(double _salario)
{
    salario = _salario;
}

void Funcionario::dizOi()
{
    cout << "Ola, meu nome é " << nome << ", tenho " << idade << " anos e ganho " << salario << endl;
}
double Funcionario::valorXerox(int qtd)
{
    return 0.07 * qtd;
}
