#ifndef HORARIO_H
#define HORARIO_H
#include<iostream>

using namespace std;
class Horario
{
    public:
        Horario();
        Horario(int h, int m, int s);
        int getMin();
        int getHora();
        int getSeg();
        void setMin(int m);
        void setHora(int h);
        void setSeg(int s);
        void setHorario(int h, int m, int s);
        void avancarHorario();

    protected:
        int hora, minuto, segundo;

    private:
};

#endif // HORARIO_H
