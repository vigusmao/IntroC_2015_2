#ifndef CAMINHAO_H
#define CAMINHAO_H

#include <Veiculo.h>


class Caminhao : public Veiculo //aqui � definido que a Classe Caminhao � derivada de Veiculo
{
    public:
        Caminhao();
        virtual ~Caminhao();
        double getCarga();
        void setCarga(double novaCarga);
    protected:
    private:
        double carga;
};

#endif // CAMINHAO_H
