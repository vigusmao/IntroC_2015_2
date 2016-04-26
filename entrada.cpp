//exemplos de manipulação dos objetos de entrada do teclado e saída na tela e da classe string

#include <iostream>
#include <string>
#include "string.h"

using namespace std;

int main(){

    string nome;
    int idade;
    char nome2[20];
    //char *palavra;

    cout << "Digite seu primeiro nome " << endl;
    cin >> nome; // lê do teclado até antes do primeiro espaço ou até apertar ENTER

    cout << "Você digitou " << nome << endl; //imprindo variáveis
    cout << "A segunda letra do seu nome é " << nome[1] << endl; //acesso a caracter na string
    cout << "Seu nome tem " << nome.size() << " letras" << endl; //tamanho da string

    cout << "Digite sua idade " << endl;
    cin >> idade; //exemplo de leitura de inteiro
    cout << "Você tem " << idade << " anos" << endl;

    strcpy(nome2, nome.c_str()); //c_str() retorna o vetor de caracteres correspondente à string
    cout << "Imprimindo seu nome usando vetor de caracteres" << endl;
    cout << nome2 << endl;

    return 0;
}
