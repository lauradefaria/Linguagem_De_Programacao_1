#ifndef EMPREGADO_H
#define EMPREGADO_H
#include<iostream>

using namespace std;
class Empregado
{
    public:
        Empregado();
        Empregado(string n, string s, double v);
        void setNome(string n);
        void setSob(string s);
        void setSal(double v);
        string getNome();
        string getSob();
        double getSal();

    private:
        string nome, sobrenome;
        double salario;
};

#endif // EMPREGADO_H
