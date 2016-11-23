#include <iostream>
#include <cstdlib>
#include "func_buble.h"

using namespace std;

#define tam 100
int main()
{
    int v[tam], quant, op, i;


    cout << "Programa para realizar ordenacao Bubblesort" << endl;
    do {
        cout << "Quanto valores deseja ordenar: ";
        cin >> quant;

    } while (quant < 1 || quant > tam);

    cout << "Menu de opcoes" << endl;
    cout << "1 - Ascendente" << endl;
    cout << "2 - Descendente" << endl;
    cout << "3 - Aleatorio" << endl;
    do {
        cout << "Qual distribuicao de probabilidade: ";
        cin >> op;
    } while (op < 1 || op > 3);

    switch (op) {
    case 1 :
        for (i=0; i < quant; i++){
            v[i] = i;
        }
        ordena_bubble(quant, v);
        break;
    case 2 :
        for (i=0; i < quant; i++){
            v[i] = quant - i;
            }
            ordena_bubble(quant, v);
        break;
    case 3 :
        for (i=0; i < tam; i++){
            v[i] = rand() % 1000;
            }
            ordena_bubble(quant, v);
        break;

    }


}

