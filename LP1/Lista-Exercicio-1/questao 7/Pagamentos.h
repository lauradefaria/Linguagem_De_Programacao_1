#ifndef PAGAMENTOS_H
#define PAGAMENTOS_H
#include <iostream>

using namespace std;

class Pagamentos
{
    public:
        Pagamentos();
        double getValorPagamento();
        string getNomeDoFuncionario();
        void setValorPagamento(double);
        void setNomeDoFuncionario(string);

    protected:
        double valorPagamento = 0;
        string nomeDoFuncionario;
};

#endif // PAGAMENTO_H
