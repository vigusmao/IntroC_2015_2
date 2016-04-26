//Exemplo de defini��o de classe

#include <stdio.h>

//defini��o de uma classe
class Hello{
public:
    Hello(); //m�todo construtor
    void dizAlo();
};

//implementa��o dos m�todos
Hello::Hello(){
}

void Hello::dizAlo(){
    printf("Hello World!\n");
}

int main(){
    Hello h; // inst�ncia de uma classe (objeto)
    h.dizAlo(); //mensagem para o objeto executar uma a��o atrav�s de m�todo

    return 0;
}
