#ifndef PONTO_H
#define PONTO_H


class Ponto
{
    public:
        int x, y;
        Ponto();
        virtual ~Ponto();

        double distanciaOrigem();

};

#endif // PONTO_H
