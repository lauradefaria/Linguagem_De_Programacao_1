#include "FigurasGeometricas.h"

using namespace std;

FigurasGeometricas::FigurasGeometricas()
{
    nome = " ";
}

FigurasGeometricas::~FigurasGeometricas()
{
    //dtor
}

string FigurasGeometricas::getNome(){
    return nome;
}
