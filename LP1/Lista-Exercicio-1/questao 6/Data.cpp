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

int Data::compara(Data objeto){
    if ((objeto.dia == dia) && (objeto.mes == mes) && (objeto.ano == ano)){
        return 0;
    }else if(ano > objeto.ano){
        return 1;
    }else if(ano == objeto.ano){
        if(mes > objeto.mes){
            return 1;
        }else if(mes == objeto.mes){
            if(dia > objeto.dia){
                return 1;
            }else{
                return -1;
            }
        }
    }
}

string Data::getMesExtenso(){
    switch(mes){
        case 1:
            return "janeiro";
            break;
        case 2:
            return "fevereiro";
            break;
        case 3:
            return "marco";
            break;
        case 4:
            return "abril";
            break;
        case 5:
            return "maio";
            break;
        case 6:
            return "junho";
            break;
        case 7:
            return "julho";
            break;
        case 8:
            return "agosto";
            break;
        case 9:
            return "setembro";
            break;
        case 10:
            return "outubro";
            break;
        case 11:
            return "novembro";
            break;
        case 12:
            return "dezembro";
            break;
        default:
            break;
    }
}

bool isBissexto(){
    if((ano%4)==0){
        return true;
    }
    else{
        return false;
    }
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
