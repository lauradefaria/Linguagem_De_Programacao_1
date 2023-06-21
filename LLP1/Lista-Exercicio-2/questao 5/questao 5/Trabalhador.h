#ifndef TRABALHADOR_H
#define TRABALHADOR_H

#include <string>

using namespace std;

class Trabalhador{

	protected:
		string nome;
		float salario;
		int horaExtra;
		float valor;

	public:
		Trabalhador();
		Trabalhador(string nome, float salario);
		virtual double calcularPagamentoSemanal(int horasSemanais);
		string getNome();
		float getSalario();
		float getValor();
		int getHoraExtra();
};

#endif
