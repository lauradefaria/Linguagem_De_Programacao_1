#ifndef MESADERESTAURANTE_H
#define MESADERESTAURANTE_H

#include <iostream>
#include "Pedido.h"

class MesaDeRestaurante
{
    public:
        MesaDeRestaurante();
        void AdicionaAoPedido(Pedido p1);
        void ZeraPedidos();
        double CalculaTotal();

    private:
        Pedido pedidos[100];
};

#endif // MESADERESTAURANTE_H
