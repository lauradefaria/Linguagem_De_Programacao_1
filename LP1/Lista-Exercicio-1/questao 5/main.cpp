#include "Horario.h"
#include <iostream>

using namespace std;

int main()
{
    Horario hora = Horario(14,32,45);

    cout << "horario atual: " << hora.getHora() << ":" << hora.getMin() << ":" << hora.getSeg() << endl;
    hora.setHora(15);
    hora.setMin(34);
    hora.setSeg(59);
    cout << "horario atual: " << hora.getHora() << ":" << hora.getMin() << ":" << hora.getSeg() << endl;
    cout << "horario avançado: " << hora.avancarHorario() << endl;

    return 0;
}
