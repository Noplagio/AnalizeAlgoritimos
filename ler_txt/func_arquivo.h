#include <iostream>
#include <sstream>
#include <fstream>
#include "func_vetor.h"
using namespace std;

//carregar classe vetor
vetor v;


class arquivo{
    public:
    arquivo();
    void carregar_txt();
    void imprimir_vetor();
};

arquivo::arquivo(){
    //construtor
}
void arquivo::carregar_txt(){
    string nome;
    ifstream arquivo;
    string vetor[FILENAME_MAX];

    //abrindo arquivo
    arquivo.open("nomes2016_2", ios::in);

    if(arquivo.fail() == 1){
                cout<<"Arquivo inexistente!! erro fatal!!";
            }
            else{
                while(!arquivo.eof()){
                    arquivo >> nome;

                    v.set_nome(nome);
                    v.carrega_vetor();
                }
                arquivo.close();
            }

}

