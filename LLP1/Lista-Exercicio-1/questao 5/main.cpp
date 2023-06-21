#include <iostream>
#include "Despesa.h"
#include "ControleDeGastos.h"

using namespace std;

int main()
{
    ControleDeGastos ctdr;
    Despesa d1;
    Despesa d2;

    d1.setValor(15);
    d1.setTipo("saude");
    cout << "Valor despesa 1: " << d1.getValor() << endl << "Tipo despesa 1: " << d1.getTipo() << endl;

    d2.setValor(30);
    d2.setTipo("alimentacao");
    cout << "Valor despesa 2: " << d2.getValor() << endl << "Tipo despesa 2: " << d2.getTipo() << endl;

    ctdr.setDespesa(d1, 2);
    ctdr.setDespesa(d2, 8);

    cout << "Total de despesas: " << ctdr.calculaTotalDeDespesas() << endl;

    if(ctdr.existeDespesaDoTipo("transporte"))
        cout << "Existe Despesa do tipo" << endl;
    else
        cout << "Nao existe do tipo" << endl;

}
