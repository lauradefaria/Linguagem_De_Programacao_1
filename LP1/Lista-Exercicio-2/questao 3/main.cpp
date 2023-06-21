#include <iostream>
#include "SistemaGerenciaFolha.h"
#include "Funcionario.h"

using namespace std;

int main(){

    SistemaGerenciaFolha sistema = SistemaGerenciaFolha();

    Funcionario *asl = new Assalariado();
    Funcionario *com = new Comissionado();
    Funcionario *hor = new Horista();

    asl->setNome("Laurinha");
    asl->setMatricula(1);
    ((Assalariado *)asl)->setSalario(1000);

    com->setNome("Maria");
    com->setMatricula(1);
    ((Comissionado *)com)->setSalarioBase(990);
    ((Comissionado *)com)->setVendasSemanais(200);
    ((Comissionado *)com)->setPercentualComissao(15);

    hor->setNome("Celia");
    hor->setMatricula(2);
    ((Horista *)hor)->setSalarioPorHora(15);
    ((Horista *)hor)->setHorasTrabalhadas(50);

    sistema.setFuncionario(asl);
    sistema.setFuncionario(com);
    sistema.setFuncionario(hor);

    cout << asl->toString();
    cout << com->toString();
    cout << hor->toString() << endl;

    cout << "Total de pagamento na folha: " << sistema.calculaValorTotalFolha() << endl;
    cout << "Salario do funcionario de matricula 1: " << sistema.consultaSalarioFuncionario(1) << endl;

    try{
        cout << "Salario do funcionario de matricula 2: " << sistema.consultaSalarioFuncionario(2) << endl;
    }catch(FuncionarioNaoExisteException e){
        cout << e.what() << endl;
    }
    return 0;
}
