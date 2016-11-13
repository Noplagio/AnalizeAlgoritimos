/*
 *DESENVOLVIMENTO DO ALGORITIMO QUE ENCONTRA A SERIE DE FIBONACCI
 * Academicos: Eduardo Spillere Anzolin e Victor Pavei Goes;
 * Data: 13/11/2016
 * Universidade do extremo sul catarinense;
*/

#include <iostream>
#include "func_fibonacci.h"


using namespace std;

func_fibonacci f;

void menu(){
    cout<<"PARA SAIR BASTA DIGITAR 0\n"<<endl;
    cout<<"Informe um numero para calcular a sua sequencia de fibonacci:";
}

int main(){

    int numero;
    while(numero > 0){
        menu();
        cin>>numero;
        if(numero > 0){
            f.calcular(numero);
        }
        else{
            cout<<"Saindo!!"<<endl;
        }

    }

}
