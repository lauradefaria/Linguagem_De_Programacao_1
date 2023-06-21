#include <iostream>
#include "ContaEspecial.h"

using namespace std;

int main(){
    Conta *c1 = new Conta();
    ContaEspecial *ce1 = new ContaEspecial();

    c1->Depositar(1000);
    ce1->Depositar(2000);

    cout << "Saldo antigo da conta 1: " << c1->getSaldo() << endl;
    cout << "Saldo antigo da conta especial 1: " << ce1->getSaldo() << endl;

    c1->Sacar(900);
    ce1->Sacar(400);

    cout << "Saldo atual da conta 1: " << c1->getSaldo() << endl;
    cout << "Saldo atual da conta especial 1: " << ce1->getSaldo() << endl;

    c1->setSalarioMensal(2000);
    c1->DefinirLimite();

    ce1->setSalarioMensal(4000);
    ce1->DefinirLimite();

    cout << "Limite da conta 1: " << c1->getLimite() << endl;
    cout << "Limite da conta especial 1: " << ce1->getLimite() << endl;

    return 0;
}
