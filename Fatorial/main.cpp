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
    cout<<"Informe um numero para calcular o fatorial:";
}

int main(){

    int numero;
    menu();
    cin>>numero;

    f.calcular_fatorial(numero);

}
