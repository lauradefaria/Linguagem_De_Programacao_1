#include <iostream>
#include "Pessoa.h"

using namespace std;

int main()
{
    Endereco e1 = Endereco(860, "Helena Meira Lima", "Tambau", "Paraiba", "João pessoa", "58039-081");
    Endereco e2 = Endereco();

    e2.setNumero(1029);
    e2.setRua("Esperanca");
    e2.setBairro("Manaira");
    e2.setEstado("Paraiba");
    e2.setCidade("Joao Pessoa");
    e2.setCep("58718-023");

    Pessoa p1 = Pessoa("Laura Maranhão", e1, "(83) 98612-9864");
    Pessoa p2 = Pessoa();

    p2.setNome("Maria Souza");
    p2.setEndereco(e2);
    p2.setTelefone("(83) 3512-4891");

    cout << p1.toString() << endl;
    cout << p2.toString();

    return 0;
}
