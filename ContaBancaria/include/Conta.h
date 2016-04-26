#include <string>
#include <iostream>

#ifndef CONTA_H
#define CONTA_H

using namespace std;


class Conta
{

    public:
        Conta(string novoNome);
        Conta();
        virtual ~Conta();

        int saque(float valor);
        void deposita(float valor);
        void mudaNome(string novoNome);
        float consultaSaldo();
        string retornaNome();

    private:
        string nome;
        float saldo;

        //exemplo de método privado para controle interno da classe
        int podeSacar(float valor);
};

#endif // CONTA_H
