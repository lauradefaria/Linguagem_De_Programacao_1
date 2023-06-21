#include <iostream>
#include <fstream>

using namespace std;

int main(){
    ifstream
        input("placar.txt", ios::in);
    ofstream
        output("arquivo_bkp.txt", ios::out);

    string
        nome;
    int
        idade, salario;

    if(!input.is_open()){
        cout << "erro na entrada" << endl;
        return -1;
    }
    if(!output.is_open()){
        cout << "erro na saída" << endl;
        return -2;
    }

    while(!input.eof()){
        getline(input, nome);

        input >> idade;

        input >> salario;
    }

    output << nome << endl;
    output << idade << endl;
    output << salario;

    input.close();
    output.close();
    return 0;
}
