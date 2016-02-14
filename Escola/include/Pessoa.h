#ifndef PESSOA_H
#define PESSOA_H

#include <string>
using namespace std;

class Pessoa
{
    public:
        Pessoa(string _nome, int _idade);
        virtual ~Pessoa();
        string getNome();
        void setNome(string _nome);
        int getIdade();
        void setIdade(int _idade);
        void dizOi(); //este m�todo est� sendo redefinido nas classes derivadas com comportamentos diferentes
        double valorXerox(int qtd); //este m�todo est� sendo redefinido nas classes derivadas com comportamentos diferentes
    protected: //exemplos de uso de protected. Atributos s�o vis�veis apenas na pr�pria classe e nas classes derivadas
        string nome;
        int idade;
    private:

};

#endif // PESSOA_H
