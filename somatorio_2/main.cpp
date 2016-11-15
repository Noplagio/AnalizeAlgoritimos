#include <iostream>

using namespace std;

void calcula(int j, int n){
    int indice=0, um =1, soma1=0, soma2=0;
    long fim, resultado;
    while(indice != n){
        soma1 = j+1;
        soma2 = j+2;

        resultado = j*(soma1*soma2);

        fim = 1/resultado;

        indice++;

    }

    cout<<"Somatorio:"<<fim<<endl;

}


int main()
{

    int j=-1, n;

    cout<<"INFORME A QUANTIDADE DE VESES QUE SERA EXECUTADO:"<<endl;
    cin>>n;

    calcula(j, n);

}
