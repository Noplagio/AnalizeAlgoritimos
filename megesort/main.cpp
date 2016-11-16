/*
 *FUNÇÃO DESENVOLVIDA POR EDUARDO SPILLERE ANZOLIN E VICTOR PAVEI GOES
 *CODIGO: DE MERGE SORT
 *DATA: 15/11/2016
 *LOCAL: Unesc - sc
*/
#include <iostream>
#include "func_merge.h"
#include <cstdlib>

using namespace std;

int vetor[10];

func_merge a;

void carrega_vetor_crescente(){
    for(int i=1;i<=10;i++){
        vetor[i] = i;
    }
}

void carrega_aleatorio(){
    for(int i=0;i<10;i++){
        vetor[i] = rand();
    }
}

void menu(){
    cout<<"======MENU======"<<endl;
    cout<<"0-Sair"<<endl;
    cout<<"1-Entrada normal:"<<endl;
    cout<<"2-Entrada aleatoria:"<<endl;
}

int main(){

    int op = -1, inicial = 0, fim = 10;
    menu();
    cin>>op;
    while(op != 0){
        switch(op){
            case 1:
            cout<<"Entrada normal selecionada!!"<<endl;
            carrega_vetor_crescente();
            a.orderna(vetor, inicial, fim);
            a.imprimi();
            menu();
            cin>>op;
            break;
            case 2:
            cout<<"Entrada aleatoria selecionada!!"<<endl;
            carrega_aleatorio();
            a.orderna(vetor, inicial, fim);
            a.imprimi();
            menu();
            cin>>op;
            break;
        }
    }
}
