#ifndef CIRCULO_H
#define CIRCULO_H
#include "Ponto.h"

class Circulo
{
    public:
        Ponto centro;
        int raio;

        Circulo();
        virtual ~Circulo();

        double retornaPerimetro();
        double distanciaCentroOrigem();

};

#endif // CIRCULO_H
