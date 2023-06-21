#include "Horario.h"
#include<iostream>

using namespace std;
Horario::Horario()
{
}

Horario::Horario(int h, int m, int s)
{
    setHorario(h, m, s);
}

void Horario::setHorario(int h, int m, int s){
    setSeg(s);
    setMin(m);
    setHora(h);
}

void Horario::setHora(int h){
    if(h>=0 && h<24){
        hora=h;
    }
    else{
        hora=00;
    }
}
void Horario::setMin(int m){
    if(m>=0 && m<=60){
        if(m==60){
            hora++;
            minuto=0;
        }
        else{
            minuto=m;
        }
    }
    else{
        minuto=0;
    }
}
void Horario::setSeg(int s){
    if(s>=0 && s<=60){
        if(s==60){
            minuto++;
            segundo=0;
        }
        else{
            segundo=s;
        }
    }
    else{
        segundo=0;
    }
}

int Horario::getHora(){
    return hora;
}
int Horario::getMin(){
    return minuto;
}
int Horario::getSeg(){
    return segundo;
}

void Horario::avancarHorario(){
    if(segundo >= 59){
        segundo = 0;
        minuto++;
    }
    if(minuto >= 59){
        minuto = 0;
        hora++;
    }
    if(hora >= 23){
        hora = 0;
    }else{
        segundo++;
    }

}
