#include <iostream>

using namespace std;

class func_sequencial{
    public:
        func_sequencial();
        void buscar(int valor_buscado, int valor[]);
};

func_sequencial::func_sequencial(){
    //construtor
}

void func_sequencial::buscar(int valor_buscado, int vetor[]){
    int posicao, resultado, veerifica;
    for(int i=1;i<=10;i++){
        if(vetor[i] == valor_buscado){
            veerifica = 1;
            posicao = i;
            resultado = vetor[i];
        }
    }
        if(veerifica == 1){
            cout<<"VALOR ENCONTRADO NA POSIÇÃO >>" << posicao <<endl;
            cout<<"VAlor:"<<resultado<<endl;
        }
        else{
            cout<<"Valor nao encontrado no array!!"<<endl;
        }


}
