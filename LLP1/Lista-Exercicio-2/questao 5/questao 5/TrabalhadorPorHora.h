#ifndef TRABALHADORPORHORA_H
#define TRABALHADORPORHORA_H

#include <string>
#include "Trabalhador.h"

class TrabalhadorPorHora : public Trabalhador{

	public:
		TrabalhadorPorHora();
		TrabalhadorPorHora(std::string nome, float valor);
		double calcularPagamentoSemanal(int horasSemanais);
};

#endif
