/*
 *FUNÇÃO DESENVOLVIDA POR EDUARDO SPILLERE ANZOLIN E VICTOR PAVEI GOES
 *CODIGO: DE QUICK SORT
 *DATA: 15/11/2016
 *LOCAL: Unesc - sc
*/
#include <iostream>
#include <cstdlib>

using namespace std;

#define TAM 10

void quick(int vet[], int esq, int dir)
{

    int pivo = esq, i,ch,j;

for(i=esq+1;i<=dir;i++)
    {

    j = i;

    if(vet[j] < vet[pivo])
        {
        ch = vet[j];

        while(j > pivo)
            {
            vet[j] = vet[j-1];
            j--;
            }

        vet[j] = ch;
        pivo++;
        }

    }
    if(pivo-1 >= esq)
        {
        quick(vet,esq,pivo-1);
    }
    if(pivo+1 <= dir)
        {
        quick(vet,pivo+1,dir);
    }
 }

int main()
{

    int vet[TAM],i;

    cout <<"Digite 10 numeros a sua escolha(a cada numero de ENTER e digite outro)" << endl;

    for(i=0;i<TAM;i++)

        cin >> vet[i];

    quick(vet,0,TAM-1);

    cout << "" << endl;
    cout << "Valores ordenados pelo QuickSort" << endl;
    cout << "" << endl;
    for(i=0;i<TAM;i++)

        cout << vet[i] << endl;

    return 0;
}
