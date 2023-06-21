#include <iostream>
#include "Conta.h"

using namespace std;

int main(){
    Conta *c1 = new Conta();

    c1->setSaldo(1000);

    try{
        c1->Sacar(2000);
    }catch(SaldoNaoDisponivelException e){
        std::cerr << e.what() << endl;
    }

    return 0;
}
