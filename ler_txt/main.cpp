#include <iostream>
#include "func_arquivo.h"

using namespace std;

//carregamos a classe
arquivo a;

int menu(){
    cout<<"Juntando oque precisamos!!"<<endl;
    cout<<"Em breve teremos o array completo carregado!!"<<endl;
}

int main(){
    menu();
    a.carregar_txt();
}
