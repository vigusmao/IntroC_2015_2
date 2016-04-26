#include <iostream>
#include "Conta.h"
#include <string>

using namespace std;

int main()
{
    string novoNome;
    cout << "Digite o nome do titular: " << endl;
    cin >> novoNome;

    Conta c1; //usando o construtor sem parâmetros

    c1.mudaNome(novoNome);
    cout << "Bem vindo, " << c1.retornaNome() << endl;
    cout << "Seu saldo é: " << c1.consultaSaldo() << endl;

    cout << "Digite o nome do próximo titular: " << endl;
    cin >> novoNome;

    Conta c2(novoNome); //usando o construtor com parâmetro

    cout << "Bem vindo, " << c2.retornaNome() << endl;
    cout << "Seu saldo é: " << c2.consultaSaldo() << endl;

    //exemplos de saque e depósito na conta
    /*c1.deposita(100.0);
    cout << "Saldo da conta: " << c1.consultaSaldo() << endl;

    c1.saque(30.0);
    cout << "Saldo da conta: " << c1.consultaSaldo() << endl;

    int retorno = c1.saque(200.0);
    if(retorno == 1){
        cout << "Novo saldo após saque " << c1.consultaSaldo() << endl;
    }
    else{
        cout << "Saldo não alterado: " << c1.consultaSaldo() << endl;
    }*/

    return 0;
}
