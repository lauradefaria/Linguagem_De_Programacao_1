#include "Invoice.h"
#include <iostream>

using namespace std;

int main()
{
    Invoice banana, laranja;

    banana=Invoice(3.44, 2, 1234, "estragada");
    laranja=Invoice(2.35, 5,8345, "em boas condicoes");

    cout << "descricao antiga da banana: " << banana.getDesc() << endl;
    banana.setDesc("em boas condicoes");
    cout << "descricao atual da banana: " << banana.getDesc() << endl;

    cout << "preco antigo da banana: " << banana.getPreco() << endl;
    banana.setPreco(2.74);
    cout << "preco atual da banana: " << banana.getPreco() << endl;

    cout << "numero antigo da laranja: " << laranja.getNum() << endl;
    laranja.setNum(2837);
    cout << "numero atual da laranja: " << laranja.getNum() << endl;

    cout << "quantidade antiga de laranja: " << laranja.getQuant() << endl;
    laranja.setQuant(23);
    cout << "quantidade atual de laranja: " << laranja.getQuant() << endl;

    cout << "fatura da laranja: " << laranja.getInvoiceAmount() << endl;
    cout << "fatura da banana: " << banana.getInvoiceAmount() << endl;



    return 0;
}
