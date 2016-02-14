#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <Pessoa.h>
#include <string>

using namespace std;


class Funcionario : public Pessoa
{
    public:
        Funcionario(string _nome, int _idade);
        Funcionario(string _nome, int _idade, double _salario);
        virtual ~Funcionario();
        double getSalario();
        void setSalario(double _salario);
        void dizOi();//m�todo redefinido. Tem o mesmo nome do m�todo da classe base
        double valorXerox(int qtd); //m�todo redefinido. Tem o mesmo nome do m�todo da classe base
    protected:
    private:
        double salario;
};

#endif // FUNCIONARIO_H
