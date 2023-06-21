#include <string>
#include <iostream>
#include "TrabalhadorPorHora.h"

using namespace std;

TrabalhadorPorHora::TrabalhadorPorHora(){
}

TrabalhadorPorHora::TrabalhadorPorHora(string nome, float valor){

	this->nome = nome;
	this->valor = valor;
	salario = 0;
}

double TrabalhadorPorHora::calcularPagamentoSemanal(int horasSemanais){

	float salarioSemanal = 0;

	if (horasSemanais <= 40){
		salarioSemanal = horasSemanais * valor;
		salario = salarioSemanal * 4;
	}
	else if (horasSemanais > 40){
		horaExtra = horasSemanais - 40;
		salarioSemanal = (40 * valor) + (horaExtra * (1.5 * valor));
	}
	salario = salarioSemanal * 4;
	return salarioSemanal;
}
