//exemplo de heran�a. Padr�o get e set

#include <iostream>
#include "Moto.h"
#include "Veiculo.h"
#include "Caminhao.h"

using namespace std;

int main()
{
    //Veiculo v;
    Moto m;
    Caminhao c;
    int passageiros;

    m.setRodas(2); //utilizando m�todo da classe base para atribuir o n�mero de rodas do ve�culo
    c.setRodas(20);
    m.setPassageiros(2); //m�todo da classe base
    c.setPassageiros(3); //m�todo da classe base
    c.setCarga(50.0); //m�todo da classe derivada

    cout << "A moto tem " << m.getRodas() << " rodas e " << m.getPassageiros() << " passageiros." << endl;
    cout << "O caminhao tem " << c.getRodas() << " rodas, " << c.getPassageiros() << " passageiros e a carga tem " << c.getCarga() << " quilos." << endl;

    return 0;
}
