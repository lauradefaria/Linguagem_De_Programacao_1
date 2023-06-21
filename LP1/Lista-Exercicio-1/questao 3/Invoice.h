#ifndef INVOICE_H
#define INVOICE_H
#include<iostream>

using namespace std;

class Invoice
{
    public:
        Invoice();
        Invoice(double, int, int, string);
        void setNum(int n);
        void setQuant(int q);
        void setPreco(double p);
        void setDesc(string d);
        int getNum();
        int getQuant();
        double getPreco();
        string getDesc();
        double getInvoiceAmount();


    private:
        int num, quantidade;
        string descricao;
        double preco;
};

#endif // INVOICE_H
