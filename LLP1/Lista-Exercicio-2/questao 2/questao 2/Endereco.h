#ifndef ENDERECO_H
#define ENDERECO_H

#include <iostream>
#include <sstream>

using namespace std;

class Endereco
{
    public:
        Endereco();
        Endereco(int numero, string rua, string bairro, string estado, string cidade, string cep);

        int getNumero();
        string getRua();
        string getBairro();
        string getEstado();
        string getCidade();
        string getCep();

        void setNumero(int numero);
        void setRua(string rua);
        void setBairro(string bairro);
        void setEstado(string estado);
        void setCidade(string cidade);
        void setCep(string cep);

        string toString();
    private:
        int numero;
        string rua;
        string bairro;
        string estado;
        string cidade;
        string cep;
};

#endif // ENDERECO_H
