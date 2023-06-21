#include <iostream>
#include "TesteValidaNumero.h"

using namespace std;

int main(){
    TesteValidaNumero t1;

    for (int i = -300; i <= 1200; i+=200){
        try{
            t1.validaNumero(i);
        }catch(ValorAbaixoException e){
            cerr << e.what() << endl;
        }catch(ValorAcimaException e){
            cerr << e.what() << endl;
        }catch(ValorMuitoAcimaException e){
            cerr << e.what() << endl;
        }
    }
    return 0;
}
