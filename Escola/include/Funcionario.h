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
        void dizOi();//método redefinido. Tem o mesmo nome do método da classe base
        double valorXerox(int qtd); //método redefinido. Tem o mesmo nome do método da classe base
    protected:
    private:
        double salario;
};

#endif // FUNCIONARIO_H
