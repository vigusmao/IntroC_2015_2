#ifndef ALUNO_H
#define ALUNO_H
#include "Pessoa.h"
#include <string>

using namespace std;

class Aluno:public Pessoa
{
    public:
        Aluno(string _nome, int _idade);
        virtual ~Aluno();
        int getMatricula();
        void setMatricula(int _matricula);
        void dizOi();
        double valorXerox(int qtd);
    protected:
    private:
        int matricula;
};

#endif // ALUNO_H
