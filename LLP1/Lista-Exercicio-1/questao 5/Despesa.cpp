#include "Despesa.h"
#include<iostream>

using namespace std;
Despesa::Despesa()
{
    valor = 0;
    tipoGasto = " ";
}

Despesa::Despesa(double v, string t)
{
    setTipo(t);
    setValor(v);
}

void Despesa::setTipo(string t){
    tipoGasto=t;
}
void Despesa::setValor(double v){
    if(v < 0)
        valor = 0;
    else
        valor=v;
}

double Despesa::getValor(){
    return valor;
}
string Despesa::getTipo(){
    return tipoGasto;
}
