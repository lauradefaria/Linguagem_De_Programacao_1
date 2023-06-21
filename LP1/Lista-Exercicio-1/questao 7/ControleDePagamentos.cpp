#include "ControleDePagamentos.h"
#include "Pagamentos.h"
#include <iostream>
#include <stdio.h>

using namespace std;

int i;

ControleDePagamentos::ControleDePagamentos(int pos, string n)
{
    pagamentos[pos].setNomeDoFuncionario(n);
}

void ControleDePagamentos::setPagamentos(double valor){
    for(i=0; i<20; i++){
        if(pagamentos[i].getValorPagamento() == 0){
                pagamentos[i].setValorPagamento(valor);
            break;
        }
    }
}

double ControleDePagamentos::calculaTotalDePagamentos(){
    double total=0;

    for(i=0; i<20; i++){
        if(pagamentos[i].getValorPagamento() != 0){
            total = total + pagamentos[i].getValorPagamento();
        }
    }
    return total;
}

bool ControleDePagamentos::existePagamentoParaFuncionario(string nomeFuncionario){
    for(i=0; i<20; i++){
        if(pagamentos[i].getNomeDoFuncionario() == nomeFuncionario){
            return true;
        }else return false;
    }
}





