#include <string>
#include <iostream>
#include "TrabalhadorAssalariado.h"

using namespace std;

TrabalhadorAssalariado::TrabalhadorAssalariado(){
}

TrabalhadorAssalariado::TrabalhadorAssalariado(string nome, float salario)
: Trabalhador(nome, salario){
}

double TrabalhadorAssalariado::calcularPagamentoSemanal(int horasSemanais){

	return salario/4;
}
