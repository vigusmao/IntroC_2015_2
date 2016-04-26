//Exemplo de definição de classe

#include <stdio.h>

//definição de uma classe
class Hello{
public:
    Hello(); //método construtor
    void dizAlo();
};

//implementação dos métodos
Hello::Hello(){
}

void Hello::dizAlo(){
    printf("Hello World!\n");
}

int main(){
    Hello h; // instância de uma classe (objeto)
    h.dizAlo(); //mensagem para o objeto executar uma ação através de método

    return 0;
}
