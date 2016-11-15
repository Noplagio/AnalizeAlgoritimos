#include <iostream>
#include <cstdlib>

using namespace std;

class func_merge{
    public:
        int vetorfinal[10];
        func_merge();
        void orderna(int vetor[], int posicaoInicio, int posicaoFim);
        void imprimi();
};

func_merge::func_merge(){
    //construtor
}

void func_merge::orderna(int vetor[], int posicaoInicio, int posicaoFim){

    int i, j, k, metadeTamanho, *vetorTemp;

    if(posicaoInicio == posicaoFim) return;

    // ordenacao recursiva das duas metades
    metadeTamanho = (posicaoInicio + posicaoFim ) / 2;
    orderna(vetor, posicaoInicio, metadeTamanho);
    orderna(vetor, metadeTamanho + 1, posicaoFim);

    // intercalacao no vetor temporario t
    i = posicaoInicio;
    j = metadeTamanho + 1;
    k = 0;
    vetorTemp = (int *) malloc(sizeof(int) * (posicaoFim - posicaoInicio + 1));

    while(i < metadeTamanho + 1 || j  < posicaoFim + 1) {
        if (i == metadeTamanho + 1 ) { // i passou do final da primeira metade, pegar v[j]
            vetorTemp[k] = vetor[j];
            j++;
            k++;
        }
        else {
            if (j == posicaoFim + 1) { // j passou do final da segunda metade, pegar v[i]
                vetorTemp[k] = vetor[i];
                i++;
                k++;
            }
            else {
                if (vetor[i] < vetor[j]) {
                    vetorTemp[k] = vetor[i];
                    i++;
                    k++;
                }
                else {
                    vetorTemp[k] = vetor[j];
                    j++;
                    k++;
                }
            }
        }

    }
    // copia vetor intercalado para o vetor original
    for(i = posicaoInicio; i <= posicaoFim; i++) {
        vetor[i] = vetorTemp[i - posicaoInicio];
    }
    free(vetorTemp);
    for(int i=0;i<10;i++){
        vetorfinal[i] = vetor[i];
    }
}

void func_merge::imprimi(){
    for(int i=0;i<10;i++){
        cout<<vetorfinal[i]<<endl;
    }
}

