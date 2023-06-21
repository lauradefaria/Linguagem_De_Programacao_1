#include "Pagamento.h"
#include<iostream>

using namespace std;
Pagamento::Pagamento()
{
    valor = 0;
    nome = " ";
}
double Pagamento::getValor(){
    return valor;
}

string Pagamento::getNome(){
    return nome;
}

void Pagamento::setValor(double v){
    if(v > 0)
        valor = v;
    else
        valor = 0;
}

void Pagamento::setNome(string n){
    nome = n;
}
