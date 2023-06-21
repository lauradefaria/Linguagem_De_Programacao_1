#include "Pessoa.h"

Pessoa::Pessoa()
{
}

Pessoa::Pessoa(string nom)
{
    nome = nom;
    //ctor
}

Pessoa::Pessoa(string nom, string tel, int id)
{
    nome = nom;
    telefone = tel;
    if(id<0){
        cout << "idade negativa, a idade sera iniciada como 0" << endl;
        idade = 0;
    }
    else{
        idade = id;
    }
    //dtor
}

void Pessoa::setIdade(int i){
    if(i<0){
        cout << "idade negativa, a idade sera iniciada como 0" << endl;
        idade = 0;
    }
    else{
        idade = i;
    }
}

void Pessoa::setNome(string n){
    nome = n;
}

void Pessoa::setTelefone(string t){
    telefone = t;
}

int Pessoa::getIdade(){
    return idade;
}

string Pessoa::getNome(){
    return nome;
}

string Pessoa::getTelefone(){
    return telefone;
}

