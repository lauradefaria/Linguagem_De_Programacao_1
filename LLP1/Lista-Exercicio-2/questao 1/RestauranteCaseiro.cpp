#include "RestauranteCaseiro.h"

RestauranteCaseiro::RestauranteCaseiro()
{
    for(int i = 0; i < 100; i++){
        mesas[i].ZeraPedidos();
    }
}

void RestauranteCaseiro::AdicionaMesa(MesaDeRestaurante m1){
    for(int i = 0; i < 100; i++){
        if(mesas[i].CalculaTotal() == 0){
            mesas[i] = m1;
            break;
        }
    }
}

void RestauranteCaseiro::AdicionaAoPedido(Pedido p1, int numMesa){
    if(numMesa >= 0 && numMesa < 100)
        mesas[numMesa].AdicionaAoPedido(p1);
}

double RestauranteCaseiro::CalculaTotalRestaurante(){
    double total = 0;

    for(int i = 0; i < 100; i++){
        total += mesas[i].CalculaTotal();
    }

    return total;
}
