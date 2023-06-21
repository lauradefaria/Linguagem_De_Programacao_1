#include <iostream>

#include "Triangulo.h"
#include "Quadrado.h"
#include "Circulo.h"

using namespace std;

int main()
{
    FigurasGeometricas *t1 = new Triangulo(3,10); //(base,altura)
    FigurasGeometricas *q1 = new Quadrado(7);     //raio
    FigurasGeometricas *c1 = new Circulo(9);      //lado

    cout << "Figura: " << t1->getNome() << "\nArea: " << t1->CalcularArea() << endl << endl;
    cout << "Figura: " << q1->getNome() << "\nArea: " << q1->CalcularArea() << endl << endl;
    cout << "Figura: " << c1->getNome() << "\nArea: " << c1->CalcularArea() << endl;

    return 0;
}
