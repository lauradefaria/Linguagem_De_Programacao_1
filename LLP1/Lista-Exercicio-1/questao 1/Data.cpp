#include "Data.h"
#include<iostream>

using namespace std;
Data::Data()
{
    dia = mes = ano = 1;
}

Data::Data(int d , int m, int a)
{
    setDia(d);
	setMes(m);
	setAno(a);
}

int Data::getDia(){
	return dia;
}
int Data::getMes(){
	return mes;
}
int Data::getAno(){
	return ano;
}
void Data::setDia(int d){
	if((d<=31) && (d>0)){
		dia = d;
	}
	else{
		mes=01;
		dia=01;
		ano=0001;
	}
}
void Data::setMes(int m){
	if((m<=12) && (m>0)){
		mes = m;
	}
	else{
		mes=01;
		dia=01;
		ano=0001;
	}
}
void Data::setAno(int a){
    if(a>=0 && a<=9999){
        ano = a;
    }
    else{
        mes=01;
		dia=01;
		ano=0001;
    }
}

void Data::avancarDia(){
    ++dia;
    if(dia==32){
            dia=1;
        if(mes==12){
            ano++;
            mes=1;
        }
        else{
            ++mes;
        }
    }
}
