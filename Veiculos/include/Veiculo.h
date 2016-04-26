//classe base que será herdada por outras classes

#ifndef VEICULO_H
#define VEICULO_H


class Veiculo
{
    public:
        Veiculo();
        Veiculo(int r);
        virtual ~Veiculo();
        int getRodas();
        void setRodas(int nRodas);
        int getPassageiros();
        void setPassageiros(int nPassageiros);
        double getPeso();
        void setPeso(double novoPeso);

    private:
        int rodas;
        int passageiros;
        double peso;
};

#endif // VEICULO_H
