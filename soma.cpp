//exemplos de sobrecarga de métodos

#include <iostream>

using namespace std;

class Soma{
    public:
        Soma();
        int soma(int x, int y); //soma dois inteiros
        int soma(int x, int y, int z); //soma três inteiros
};

Soma::Soma(){
}

int Soma::soma(int x, int y){
    cout << "Somando 2 parametros" << endl;
    return x+y;
}

int Soma::soma(int a, int b, int c){
    cout << "Somando 3 parametros" << endl;
    return a+b+c;
}

int main(){

    Soma s1;
    int resultado1, resultado2;

    resultado1 = s1.soma(2, 5);
    cout << "O resultado da soma eh " << resultado1 << endl;

    resultado2 = s1.soma(2, 5, 3);
    cout << "O resultado da soma eh " << resultado2 << endl;

    return 0;
}
