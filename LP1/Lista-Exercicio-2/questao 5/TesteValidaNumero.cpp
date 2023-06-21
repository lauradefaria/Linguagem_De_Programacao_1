#include "TesteValidaNumero.h"

using namespace std;

TesteValidaNumero::TesteValidaNumero(){
}

TesteValidaNumero::~TesteValidaNumero(){
}

void TesteValidaNumero::validaNumero(int num){
    if (num <= 0){
        throw ValorAbaixoException();
    }else if(num > 100 && num < 900){
        throw ValorAcimaException();
    }else if(num >= 900){
        throw ValorMuitoAcimaException();
    }else{
        cout << num << "numero valido" << endl;
    }

}
