#include <iostream>
#include "RestauranteCaseiro.h"

using namespace std;

int main()
{
    Pedido p1(1,3,10.0, "pizza");
    Pedido p2(2,2,5.50, "pastel");
    Pedido p3(3,1,12.50, "hamburguer");

    cout << p1.toString() << endl;
    cout << p2.toString() << endl;
    cout << p3.toString() << endl;

    MesaDeRestaurante m1;
    MesaDeRestaurante m2;

    m1.AdicionaAoPedido(p1);
    m1.AdicionaAoPedido(p2);

    m2.AdicionaAoPedido(p2);
    m2.AdicionaAoPedido(p2); //Aumenta a quantidade de x-calabresa de 1, para 2 na mesa 2.
    m2.AdicionaAoPedido(p3);

    cout << "Mesa 1: 3 pizzas + 2 pasteis\nTotal: R$" << m1.CalculaTotal() << endl; // 2*10 + 3*5.5
    cout << "Mesa 2: 4 pasteis + hamburguer\nTotal: R$" << m2.CalculaTotal() << endl << endl; // 4*5.5 + 1*12.50

    RestauranteCaseiro r1;

    r1.AdicionaMesa(m1);
    r1.AdicionaMesa(m2);

    cout << "Total do restaurante antigo: R$" << r1.CalculaTotalRestaurante() << endl; // 41 + 34.50

    r1.AdicionaAoPedido(p1, 2); // + 3 * 10

    cout << "\nMesa 1: 3 pizzas + 2 pasteis\nTotal: R$" << m1.CalculaTotal() << endl; // 2*10 + 3*5.5
    cout << "Mesa 2: 3 pizzas + 4 pasteis + hamburguer\nTotal: R$" << m2.CalculaTotal() << endl << endl; // 3*10 + 4*5.5 + 1*12.50

    cout << "Total do restaurante atual: R$" << r1.CalculaTotalRestaurante() << endl; // 75.5 + 30

    return 0;
}
