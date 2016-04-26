#include "Conta.h"

Conta::Conta(string novoNome) //passando parâmetros para o construtor e inicializando atributos
{
    mudaNome(novoNome);
    saldo = 10.0;
}

Conta::Conta(){ //sobrecarga do construtor. Esse não tem parâmetros
    saldo = 10.0;
}

Conta::~Conta()
{
    //dtor
}


int Conta::saque(float valor){
    if(podeSacar(valor)){
        saldo = saldo - valor;
        return 1;
    }
    else{
        cout << "Saldo insuficiente" << endl;
        return 0;
    }
}


void Conta::deposita(float valor){
    saldo = saldo = valor;
}


void Conta::mudaNome(string novoNome){
    nome = novoNome;
}

float Conta::consultaSaldo(){
    return saldo;
}

int Conta::podeSacar(float valor){
    if(valor > saldo){
        return 0;
    }
    else{
        return 1;
    }
}

string Conta::retornaNome(){
    return nome;
}
