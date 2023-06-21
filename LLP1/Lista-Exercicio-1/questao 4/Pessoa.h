#ifndef PESSOA_H
#define PESSOA_H
#include<iostream>

using namespace std;

class Pessoa
{
    private:
       string nome;
       string telefone;
       int idade;

    public:
        Pessoa(string);
        Pessoa(string,string,int);
        Pessoa();
        void setNome(string);
        void setTelefone(string);
        void setIdade(int);
        int getIdade();
        string getTelefone();
        string getNome();
};

#endif // PESSOA_H
