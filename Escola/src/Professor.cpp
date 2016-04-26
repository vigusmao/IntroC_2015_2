#include "Professor.h"
#include <iostream>
#include <string>
using namespace std;

Professor::Professor(string _nome, int _idade):Funcionario::Funcionario(_nome, _idade, 6000.0)
{
    //cout << "Construindo um professor " << endl;
}

Professor::~Professor()
{
    //dtor
}
string Professor::getDisciplina()
{
    return disciplina;
}

void Professor::setDisciplina(string _disciplina)
{
    disciplina = _disciplina;
}
