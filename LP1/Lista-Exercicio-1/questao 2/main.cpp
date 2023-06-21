#include <iostream>
#include "Pessoa.h"

using namespace std;

int main()
{
    Pessoa Laura;
    Pessoa Marcos;

    Laura = Pessoa("laura", "83 8334-2457", 19);
    Marcos = Pessoa("marcos", "88 8827-2123", 19);

    cout << "idade antiga de Marcos: " << Marcos.getIdade() << endl;
    Marcos.setIdade(18);
    cout << "nova idade de Marcos: " << Marcos.getIdade() << endl;

    cout << "nome antigo de Laura: " << Laura.getNome() << endl;
    Laura.setNome("Laurinha");
    cout << "novo nome de Laura: " << Laura.getNome() << endl;

    cout << "telefone antigo de Marcos: " << Marcos.getTelefone() << endl;
    Marcos.setTelefone("88 8293-2123");
    cout << "novo telefone de Marcos: " << Marcos.getTelefone() << endl;

    return 0;
}
