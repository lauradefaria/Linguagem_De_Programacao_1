#ifndef CONTROLEDEPAGAMENTOS_H
#define CONTROLEDEPAGAMENTOS_H

#include "Pagamentos.h"
#include <iostream>

using namespace std;

class ControleDePagamentos
{
    public:
        ControleDePagamentos(int pos, string n);
        void setPagamentos(double valor);
        double calculaTotalDePagamentos();
        bool existePagamentoParaFuncionario(string);


    private:
        Pagamentos pagamentos[20];
};

#endif // CONTROLEDEPAGAMENTOS_H
