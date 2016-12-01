#include <iostream>
#include "func_arquivo.h"
#include "func_vetor.h"

using namespace std;

//carregamos a classe
arquivo a;
vetor v;



int menu(){
    cout<<"Juntando oque precisamos!!"<<endl;
    cout<<"Em breve teremos o array completo carregado!!"<<endl;
}

int main(){
    menu();
    a.carregar_txt();
}
