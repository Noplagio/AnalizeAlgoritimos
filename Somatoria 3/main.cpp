/*
 *FUNÇÃO DESENVOLVIDA POR EDUARDO SPILLERE ANZOLIN E VICTOR PAVEI GOES
 *CODIGO: DE SOMATORIO 03
 *DATA: 15/11/2016
 *LOCAL: Unesc - sc
*/
#include <iostream>
#include <math.h>

using namespace std;

int calcula_fatorial(int numero){
    int resultado=1;
    while (numero != 1){
            resultado = resultado*numero;
            numero--;
        }
}

void calcula(int x){
    int soma = 0;
    double re;
    int resul = 1;
    double resposta;
    for(int i=1; i<= x; i++){

        re = (1-(pow(x, i)/calcula_fatorial(i)));
        resposta = cos(re);
    }

    cout << "O coseno é de "<< re <<" é: ";
    cout << resposta;
    cout<<"\n";

}


int main()
{

    int x=0;

    cout << "Digite quantos termos usar: " << endl;
    cin>>x;

    calcula(x);


}
