#include "ContaCorrente.h"
#include "ContaEspecial.h"
#include "Poupanca.h"

using namespace std;
int main(){

    ContaCorrente *cc = new ContaCorrente(2500, "Laura", 100, 918329);
    Poupanca *p = new Poupanca(4, 2, "Laura P", 250, 918329);
    ContaEspecial *ce = new ContaEspecial(2500, "Laura E", 200, 918329);

    cc->Depositar(2000);
    p->Depositar(3000);
    ce->Depositar(4000);

    cout << cc->toString();
    cout << p->toString();
    cout << ce->toString();

    p->setVariacao(30);
    p->setSaldo(4000);
    cout << p->toString() << endl;
    p->Sacar(4500);

    return 0;
}
