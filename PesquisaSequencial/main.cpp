/*
 *DESENVOLVIMENTO DO ALGORITIMO QUE CALCULA O FATORIAL DE UM NUMERO
 * Academicos: Eduardo Spillere Anzolin e Victor Pavei Goes;
 * Data: 13/11/2016
 * Universidade do extremo sul catarinense;
*/
#include <iostream>
#include "func_binaria.h"
#include "func_sequencial.h"


using namespace std;

func_sequencial a;
func_binaria b;

int vetor[10];

void menu(){
    cout<<"Menu"<<endl;
    cout<<"1 - BUsca Sequencial"<<endl;
    cout<<"1 - BUsca Binaria"<<endl;
    cout<<"INFORME A OPÇÃO DESEJADA:"<<endl;
}

void menu_busca(){
    cout<<"Informe um valor de 0 a 10 para buscar no vetor:"
}

void criar_vetor(){
    //coloca dados dentro do vetor
    for(int i=0;i<1-;i++){
        vetor[i] = i;
    }

}

int main(){

    int op=-1, valor=-1;

    //criamos o vetor com os valores de 0 a 10
    criar_vetor();
    menu();
    cin>>op;

    switch(op){
        case 1:
        menu_busca();
        cin>>valor;
        a.buscar(valor, vetor);
    }

}
