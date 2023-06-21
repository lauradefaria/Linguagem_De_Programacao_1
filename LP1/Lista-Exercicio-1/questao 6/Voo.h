#ifndef VOO_H
#define VOO_H
#include "Data.h"
#include "Horario.h"

using namespace std;
class Voo{
    private:
        int numVoo;
        bool vagas[100];
        Data data1;
        Horario hora1;

    public:
        Voo();
        Voo(int numVoo, bool vagas[100], Data d1, Horario h1);
        int proximoLivre();
        bool verifica(int cadeira);
        bool ocupa(int cadeira);
        int vagas();
        int getNumVoo();
        Data getData();
        Horario getHorario();
};

#endif // VOO_H
