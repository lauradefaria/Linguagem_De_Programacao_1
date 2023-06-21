#include "Pagamentos.h"
#include <iostream>

using namespace std;

Pagamentos::Pagamentos(){
}

double Pagamentos::getValorPagamento(){
    return valorPagamento;
}

string Pagamentos::getNomeDoFuncionario(){
    return nomeDoFuncionario;
}

void Pagamentos::setValorPagamento(double valorPagamento){
    this -> valorPagamento = valorPagamento;
}

void Pagamentos::setNomeDoFuncionario(string nomeDoFuncionario){
    this -> nomeDoFuncionario = nomeDoFuncionario;
}




