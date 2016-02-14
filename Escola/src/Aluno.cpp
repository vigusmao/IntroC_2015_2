#include "Aluno.h"
#include <iostream>
using namespace std;

Aluno::Aluno(string _nome, int _idade):Pessoa::Pessoa(_nome, _idade) //chamando o construtor da classe base
{
    //cout << "Construindo um aluno " << endl;
}

int Aluno::getMatricula()
{
    return matricula;
}

void Aluno::setMatricula(int _matricula)
{
    matricula = _matricula;
}


Aluno::~Aluno()
{
    //dtor
}

void Aluno::dizOi()
{
    cout << "Ola, meu nome é " << nome << ", tenho " << idade << " anos e minha matrícula é " <<  matricula << endl;
}

double Aluno::valorXerox(int qtd)
{
    return 0.05 * qtd;
}
