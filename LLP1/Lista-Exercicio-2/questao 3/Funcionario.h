#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <iostream>

using namespace std;

class Funcionario
{
    public:
        Funcionario();
        Funcionario(int matricula, string nome, double salario);

        int getMatricula();
        string getNome();
        virtual double getSalario();
        virtual double getSalario(float percentual);

        void setMatricula(int matricula);
        void setNome(string nome);
        void setSalario(double salario);

    protected:
        int matricula;
        string nome;
        double salario;
};

#endif // FUNCIONARIO_H
