#include "Empregado.h"
#include<iostream>

using namespace std;
Empregado::Empregado()
{
}

Empregado::Empregado(string n, string s, double v)
{
    setNome(n);
    setSob(s);
    setSal(v);
}

void Empregado::setNome(string n){
    nome=n;
}

void Empregado::setSob(string s){
    sobrenome=s;
}

void Empregado::setSal(double v){
    if(v>=0){
        salario=v;
    }
}

string Empregado::getNome(){
    return nome;
}

string Empregado::getSob(){
    return sobrenome;
}

double Empregado::getSal(){
    return salario;
}
