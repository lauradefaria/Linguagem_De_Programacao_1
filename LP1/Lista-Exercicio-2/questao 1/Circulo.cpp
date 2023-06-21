#include "Circulo.h"

#define pi 3.14

Circulo::Circulo()
{
    nome = "Circulo";
    raio = 0;
}

Circulo::Circulo(double raio){
    nome = "Circulo";
    setRaio(raio);
}

double Circulo::getRaio(){
    return raio;
}

void Circulo::setRaio(double raio){
    if(raio > 0)
        this->raio = raio;
    else
        this->raio = 0;
}

double Circulo::CalcularArea(){
    return pi * (raio*raio);
}
