/*
 *DESENVOLVIMENTO DO ALGORITIMO QUE CALCULA O FATORIAL DE UM NUMERO
 * Academicos: Eduardo Spillere Anzolin e Victor Pavei Goes;
 * Data: 13/11/2016
 * Universidade do extremo sul catarinense;
*/

#include <iostream>
#include "func_fatorial.h"


using namespace std;

func_fatorial f;

void menu(){
    cout<<"PARA SAIR BASTA DIGITAR 0"<<endl;
    cout<<"Informe um numero para calcular o fatorial:";
}

int main(){

    int numero;
    while(numero > 0){
        menu();
        cin>>numero;
        if(numero > 0){
            f.calcular_fatorial(numero);
        }
        else{
            cout<<"Saindo!!"<<endl;
        }

    }

}
