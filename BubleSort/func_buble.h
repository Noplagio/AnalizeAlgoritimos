#include <iostream>

using namespace std;


void ordena_bubble(int quant, int v[]){
    int aux;
    cout << "Valores para serem ordenados" << endl;

     for(int i=0;i<=quant-1;i++){

        cout <<"\n"<<v[i];
    }

    cout << "" << endl << endl;

    for(int i=quant; i >= 1; i--)
    {
        for(int j=0; j < i ; j++)
        {
            if(v[j]>v[j+1])
            {
                aux = v[j];
                v[j] = v[j+1];
                v[j+1] = aux;
            }
        }
    }
    cout << "ordenado pelo bubble" << endl;

    for(int i=0;i<=quant-1;i++){

        cout <<"\n"<<v[i];
    }

}
