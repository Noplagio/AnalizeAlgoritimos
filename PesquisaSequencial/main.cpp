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

void lista_array(){
    cout<<"\nIMPRIMINDO ARRAY!!\n"<<endl;
    for(int i=1;i<=10;i++){
        cout<<vetor[i];
        cout<<"\t";
    }
}

void menu(){
    cout<<"\n\nMenu"<<endl;
    cout<<"1 - BUsca Sequencial"<<endl;
    cout<<"2 - BUsca Binaria"<<endl;
    cout<<"3 - Listar vetor"<<endl;
    cout<<"INFORME A OPÇÃO DESEJADA:"<<endl;
}

void menu_busca(){
    cout<<"Informe um valor de 0 a 10 para buscar no vetor:"<<endl;
}

void criar_vetor(){
    //coloca dados dentro do vetor
    for(int i=1;i<=10;i++){
        vetor[i] = i;
    }

}

int main(){

    int op=-1, valor=-1;

    //criamos o vetor com os valores de 0 a 10
    while(op != 0){
        criar_vetor();
        menu();
        cin>>op;

        switch(op){
            case 1:
                menu_busca();
                cin>>valor;
                a.buscar(valor, vetor);
                break;
            case 2:
                menu_busca();
                cin>>valor;
                b.buscarBinaria(valor, vetor);
                break;
            case 3:
                lista_array();
                break;
        }
    }


}
