#ifndef RESTAURANTECASEIRO_H
#define RESTAURANTECASEIRO_H

#include <iostream>
#include "MesaDeRestaurante.h"


class RestauranteCaseiro
{
    public:
        RestauranteCaseiro();
        void AdicionaMesa(MesaDeRestaurante m1);
        void AdicionaAoPedido(Pedido p1, int numMesa);
        double CalculaTotalRestaurante();

    private:
        MesaDeRestaurante mesas[100];
};

#endif // RESTAURANTECASEIRO_H
