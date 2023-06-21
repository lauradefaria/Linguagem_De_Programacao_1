#ifndef DATA_H_INCLUDED
#define DATA_H_INCLUDED
#include<iostream>

using namespace std;
class Data
{
    public:
        Data();
        Data(int d, int m, int a);
        void setDia(int d);
        void setMes(int m);
        void setAno(int a);
        int compara(Data objeto);
        string getMesExtenso();
        bool isBissexto();
        int getDia();
        int getMes();
        int getAno();

    protected:
        int dia, mes, ano;
};

#endif
