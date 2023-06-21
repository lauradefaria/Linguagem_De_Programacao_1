#ifndef DESPESA_H
#define DESPESA_H
#include <iostream>

using namespace std;
class Despesa
{
    public:
        Despesa();
        Despesa(double v, string t);
        void setValor(double v);
        void setTipo(string t);
        double getValor();
        string getTipo();

    protected:
        double valor;
        string tipoGasto;
};

#endif // DESPESA_H
