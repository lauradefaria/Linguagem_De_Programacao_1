#include "Invoice.h"
#include<iostream>

using namespace std;
Invoice::Invoice()
{
}

Invoice::Invoice(double p, int q, int n, string d)
{
    if(q<0){
        quantidade=0;
    }
    else{
        quantidade=q;
    }

    if(p<0){
        preco=0;
    }
    else{
        preco=p;
    }
    descricao=d;
    num=n;
}

void Invoice::setPreco(double p){
    if(p<0){
        preco=0;
    }
    else{
        preco=p;
    }
}
void Invoice::setNum(int n){
    num=n;
}
void Invoice::setQuant(int q){
    if(q<0){
        quantidade=0;
    }
    else{
        quantidade=q;
    }
}
void Invoice::setDesc(string d){
    descricao=d;
}
double Invoice::getPreco(){
    return preco;
}
int Invoice::getNum(){
    return num;
}
int Invoice::getQuant(){
    return quantidade;
}
string Invoice::getDesc(){
    return descricao;
}
double Invoice::getInvoiceAmount(){
    return quantidade*preco;
}
