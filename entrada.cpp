//exemplos de manipula��o dos objetos de entrada do teclado e sa�da na tela e da classe string

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
    cin >> nome; // l� do teclado at� antes do primeiro espa�o ou at� apertar ENTER

    cout << "Voc� digitou " << nome << endl; //imprindo vari�veis
    cout << "A segunda letra do seu nome � " << nome[1] << endl; //acesso a caracter na string
    cout << "Seu nome tem " << nome.size() << " letras" << endl; //tamanho da string

    cout << "Digite sua idade " << endl;
    cin >> idade; //exemplo de leitura de inteiro
    cout << "Voc� tem " << idade << " anos" << endl;

    strcpy(nome2, nome.c_str()); //c_str() retorna o vetor de caracteres correspondente � string
    cout << "Imprimindo seu nome usando vetor de caracteres" << endl;
    cout << nome2 << endl;

    return 0;
}
