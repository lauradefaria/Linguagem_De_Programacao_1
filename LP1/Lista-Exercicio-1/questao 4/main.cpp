#include <iostream>
#include "Data.h"

using namespace std;

int main()
{
    Data d1;
    d1 = Data(8,46,2019);
	Data d2;
	d2 = Data(9,7,2019);

	cout << "a data antiga eh " << d1.getDia() << "/" << d1.getMes() << "/" << d1.getAno() << endl;
	d1.setDia(13);
	d1.setMes(3);
	d1.setAno(2002);
	cout << "a data atual eh " << d1.getDia() << "/" << d1.getMes() << "/" << d1.getAno() << endl;

	cout << "o ano de " << d2.getAno() << " eh bissexto: " << d2.isBissexto() << endl;

	if((d2.compara(d2))==0){
        cout << "o ano da data d2 eh igual a 2082" << endl;
	}
	else{
        if((d2.compara(d2))<0){
            cout << "o ano da data d3 eh maior que 2082" << endl;
        }
        else{
            cout << "o ano da data d3 eh menor que 2082" << endl;
        }
	}

	cout << "o mes da data d1 por extenso eh " << d1.getMesExtenso() << endl;



    return 0;
}
