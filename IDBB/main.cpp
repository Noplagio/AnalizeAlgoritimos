/*
    Nome: Dimitry Ladislau, Emerson Leonardo Zock Alves
    Data: 15/11/2016
    Versão: 1.0
    Descrição: Programa para realizar ordenacao com InsertionSort com busca binária

    */

#include <iostream>
#include <stdio.h>
#include <memory.h>
#include <stdlib.h>

#define TAM 100

using namespace std;



int IDBB( int vet[TAM], int N)
{
    int i, chave, j, k, c=0, t=0;

    for(i=1; i < N; i++) {
        j = i - 1;
        chave = vet[i];
        k = 0;
        while(j > -1 && k == 0) {
            c++;
            if (chave < vet[j]) {
                t++;
                vet[j+1] = vet[j];
                j = j - 1;
            } else
                k = j + 1;
        }
        t++;
        vet[k] = chave;
    }

}


int main()
{
    int tam_vetor, op = -1;

    cout << "digite quantos dados deseja colocar no vetor" << endl;
    cin >> tam_vetor;

    int vetor[tam_vetor];


        for (int i = 0; i < tam_vetor; i++)
    {
        vetor[i] = rand() % 100;
    }

    while(op != 0)
    {

        cout << "1- Mostrar vetor" << endl;
        cout << "2- Ordenar vetor" << endl;
        cout << "0- Sair" << endl;
        cin >> op;

        switch(op)
        {
        case 0:
            cout << "Saindo" << endl;
            break;
        case 1:
         for(int i = 0; i < tam_vetor; i ++)
        {
            cout << "vetor =" << vetor[i] << endl;
        }
            break;
        case 2:
            IDBB(vetor, tam_vetor);
            break;
        default:
            cout << "opcao invalida" << endl;
            break;

        }
    }

    return 0;
}
