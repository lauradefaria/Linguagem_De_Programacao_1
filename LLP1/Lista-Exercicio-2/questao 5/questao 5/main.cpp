#include <iostream>
#include "TrabalhadorPorHora.h"
#include "TrabalhadorAssalariado.h"

using namespace std;

int main(){

	Trabalhador *tph1 = new TrabalhadorPorHora("Laura Maranhao", 25);
	Trabalhador *ta1 = new TrabalhadorAssalariado("Maria Souza", 950);

	cout << "Nome: " << tph1->getNome()<< endl
         << "Valor: R$ " << tph1->getValor() << endl
         << "Horas extras: " << tph1->getHoraExtra() << endl
		 << "Pagamento semanal: R$ " << tph1->calcularPagamentoSemanal(30) << endl
		 << "Pagamento mensal: R$ " << tph1->getSalario() << endl << endl;

	cout << "Nome: " << ta1->getNome() << endl
		 << "Pagamento semanal: R$ " << ta1->calcularPagamentoSemanal(2) << endl
		 << "Pagamento mensal: R$ " << ta1->getSalario() << endl;

	delete tph1;
	delete ta1;

	return 0;
}
