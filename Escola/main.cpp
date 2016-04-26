#include <iostream>
#include "Pessoa.h"
#include "Aluno.h"
#include "Funcionario.h"
#include "Professor.h"

using namespace std;

int main()
{
    Aluno a("Juan", 24);
    Funcionario f("Gabriel", 40, 2000.0);
    Professor p("Vinicius", 35);
    a.setMatricula(123);
    a.Pessoa::dizOi();
    f.dizOi();
    p.dizOi();

    cout << a.getNome() << " tirou 10 cópias e gastou " << a.valorXerox(10) << " reais." << endl;
    cout << p.getNome() << " tirou 10 cópias e gastou " << p.valorXerox(10) << " reais." << endl;



    return 0;
}
