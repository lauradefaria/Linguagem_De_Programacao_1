#include "Voo.h"
#include <iostream>

using namespace std;
Voo::Voo(){
    numVoo = 1;
    for(int i = 0; i < 100; i++){
        vagas[i] = false;
    }
    Horario();
    Data();
}

Voo::Voo(int nV, bool v[100], Data d1, Horario h1){
    numVoo = nV;
    for(int i = 0; i < 100; i++){
        vagas[i] = v[i];
    }
    data1 = d1;
    hora1 = h1;
}

int Voo::proximoLivre(){
    for(int i = 0; i < 100; i++){
        if(vagas[i] == false){
            return i;
        }
    }
    return -1;
}

bool Voo::verifica(int cadeira){
    if(vagas[cadeira] == false)
        return true;
    else
        return false;
}

bool Voo::ocupa(int cadeira){
    if(verifica(cadeira)){
        vagas[cadeira] = true;
        return true;
    }
    else{
        return false;
    }
}

int Voo::vagas(){
    int cont = 0;

    for(int i = 0; i < 100; i++){
        if(vagas[i] == false){
            cont++;
        }
    }

    return cont;
}

int Voo::getNumVoo(){
    return numVoo;
}

Data Voo::getData(){
    return data1;
}

Horario Voo::getHorario(){
    return hora1;
}
