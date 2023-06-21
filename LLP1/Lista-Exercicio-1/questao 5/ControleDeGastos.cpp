#include "ControleDeGastos.h"
#include "Despesa.h"
#include <iostream>
#include<string.h>

using namespace std;

int i;

ControleDeGastos::ControleDeGastos()
{
    for(int i = 0; i<20; i++)
        despesas[i] = Despesa();
}

bool ControleDeGastos::setDespesa(Despesa d, int pos){
    if(d.getValor() != 0){
        despesas[pos].setValor(d.getValor());
        despesas[pos].setTipo(d.getTipo());
        return true;
    }else{
        return false;
    }
}

double ControleDeGastos::calculaTotalDeDespesas(){
    double total=0;

    for(i=0; i<20; i++){
        if(despesas[i].getValor() != 0){
            total = total + despesas[i].getValor();
        }
    }
    return total;
}

bool ControleDeGastos::existeDespesaDoTipo(string t){
    for(int i = 0; i<20; i++){
        if(t == despesas[i].getTipo()){
            return true;
        }
    }
    return false;
}
