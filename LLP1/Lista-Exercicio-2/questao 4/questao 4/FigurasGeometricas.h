#ifndef FIGURASGEOMETRICAS_H
#define FIGURASGEOMETRICAS_H

#include <iostream>

using namespace std;

class FigurasGeometricas
{
    public:
        FigurasGeometricas();
        virtual ~FigurasGeometricas();

        string getNome();

        virtual double CalcularArea() = 0;
    protected:
        string nome;
};

#endif // FIGURASGEOMETRICAS_H
