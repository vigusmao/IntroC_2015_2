#ifndef PROFESSOR_H
#define PROFESSOR_H

#include <Funcionario.h>
#include <string>

using namespace std;

class Professor : public Funcionario
{
    public:
        Professor(string _nome, int _idade);
        virtual ~Professor();
        string getDisciplina();
        void setDisciplina(string _disciplina);
    protected:
    private:
        string disciplina;
};

#endif // PROFESSOR_H
