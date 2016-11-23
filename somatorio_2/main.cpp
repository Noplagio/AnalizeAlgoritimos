/*
 *FUNÇÃO DESENVOLVIDA POR EDUARDO SPILLERE ANZOLIN E VICTOR PAVEI GOES
 *CODIGO: DE SOMATORIO 02
 *DATA: 15/11/2016
 *LOCAL: Unesc - sc
*/
#include <iostream>

using namespace std;

void calcula(float j, int n){
    int indice=0;
    long resultado;
    while(indice != n){

        resultado = (resultado + (1 / (j * (j + 1) * (j + 2))));

        indice++;

    }

    cout<<"Somatorio:"<<resultado<<endl;

}


int main()
{

    float j=-1, n;

    cout<<"INFORME A QUANTIDADE DE VESES QUE SERA EXECUTADO:"<<endl;
    cin>>n;

    calcula(j, n);


}
