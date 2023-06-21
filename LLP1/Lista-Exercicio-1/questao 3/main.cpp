#include <iostream>
#include "Empregado.h"
using namespace std;

int main()
{
    int s1, s2;
    Empregado n1 = Empregado("luiz", "ferreira", 1200);
    Empregado n2 = Empregado("maria", "costa", 2000);

    cout << "Salario anual de n1: " << (n1.getSal())*12 << endl;
    cout << "Salario anual de n2: " << (n2.getSal())*12 << endl;

    s1=((n1.getSal()*10)/100)*12;
    s2=((n2.getSal()*10)/100)*12;

    cout << "Salario de n1 com aumento: " << ((n1.getSal())*12)+s1 << endl;
    cout << "Salario de n2 com aumento: " << ((n2.getSal())*12)+s2 << endl;
    return 0;
}
