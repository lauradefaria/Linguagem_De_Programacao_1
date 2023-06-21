#include <iostream>
#include "Consultor.h"

using namespace std;

int main()
{
    Funcionario f1 = Funcionario(2001, "Laura Maranhao", 7600.00);
    Funcionario *c1 = new Consultor(1963, "Maria Souza", 7600.00);

    cout << "Funcionario: " << f1.getNome() << "\nMatricula: " << f1.getMatricula() << "\nSalario: " << f1.getSalario() << endl << endl;
    cout << "Consultor: " << c1->getNome() << "\nMatricula: " << c1->getMatricula() << "\nSalario com 10%: " << c1->getSalario() << endl;
    cout << "Salario com 30%: " << c1->getSalario(30) << endl;

    return 0;
}
