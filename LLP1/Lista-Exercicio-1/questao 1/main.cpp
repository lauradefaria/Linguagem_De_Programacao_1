#include <iostream>
#include "Data.h"
#include<stdio.h>

using namespace std;

int main()
{
    Data d1;
    d1 = Data(8,46,2019);
	Data d2;
	d2 = Data(9,7,2019);

	cout << "a d1 antiga eh " << d1.getDia << "/" << d1.getMes << "/" << d1.getAno << endl;
	d1.setDia(13);
	d1.setMes(3);
	d1.setAno(2002);
	cout << "a d1 atual eh " << d1.getDia << "/" << d1.getMes << "/" << d1.getAno << endl;

    cout << "a d2 de ontem eh " << d2.getDia << "/" << d2.getMes << "/" << d2.getAno << endl;
    d2.avancarDia();
    cout << "a d2 de hoje eh " << d2.getDia << "/" << d2.getMes << "/" << d2.getAno << endl;

    return 0;
}
