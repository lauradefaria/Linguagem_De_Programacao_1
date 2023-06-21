#ifndef PAGAMENTO_H
#define PAGAMENTO_H
#include<iostream>

using namespace std;
class Pagamento
{
    private:
        double valor;
        string nome;
    public:
        Pagamento();
        double getValor();
        string getNome();
        void setValor(double v);
        void setNome(string n);

};
#endif // Pagamento_H
