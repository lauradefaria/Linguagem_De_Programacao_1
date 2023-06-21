#include <iostream>
#include "Ginecologista.h"
#include "Cirurgiao.h"
#include "Otorrino.h"
#include "Oftalmologista.h"

using namespace std;

int main(){
    Medico *c1 = new Cirurgiao();
    Medico *g1 = new Ginecologista();
    Medico *ot1 = new Otorrino();
    Medico *of1 = new Oftalmologista();

    cout << c1->getEspecialidade() << ":\n";
    c1->RealizarCirurgia();
    cout << endl;

    cout << g1->getEspecialidade() << ":\n";
    g1->RealizarCirurgia();
    cout << endl;

    cout << ot1->getEspecialidade() << ":\n";
    ot1->RealizarCirurgia();
    cout << endl;

    cout << of1->getEspecialidade() << ":\n";
    of1->RealizarCirurgia();
    cout << endl;

    return 0;
}
