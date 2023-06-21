#include <iostream>
#include "ControleDePagamentos.h"
#include "Pagamentos.h"

using namespace std;

int main()
{
    ControleDePagamentos ci = ControleDePagamentos(0, "luana");


    ci.setPagamentos(900);

    cout << "Foi calculado um total de: " << "R$ " << ci.calculaTotalDePagamentos() << endl;

    ci.setPagamentos(200);

    cout << "Foi calculado um total de: " << "R$ " << ci.calculaTotalDePagamentos() << endl;

    ci.setPagamentos(500);

    cout << "Foi calculado um total de: " << "R$ " << ci.calculaTotalDePagamentos() << endl;

    cout << "Exite pagamento para o funcionaria luana: ";

    if((ci.existePagamentoParaFuncionario("luana"))==1){
        cout << "sim" << endl;
    }
    else{
        cout << "nao" << endl;
    }

    return 0;
}
