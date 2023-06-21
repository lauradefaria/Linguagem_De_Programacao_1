#ifndef CONTROLEDEGASTOS_H
#define CONTROLEDEGASTOS_H
#include "Despesa.h"
#include<iostream>

using namespace std;

class ControleDeGastos
{
    public:
        ControleDeGastos();
        bool setDespesa(Despesa d, int pos);
        double calculaTotalDeDespesas();
        bool existeDespesaDoTipo(string t);

    private:
        Despesa despesas[20];
};

#endif // CONTROLEDEGASTOS_H
