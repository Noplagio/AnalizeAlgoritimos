#include <iostream>

using namespace std;

float vetor[2000], matriz[2000][2000];

void encontra_fracao(float aux){
    for(int i=0;i<2000;i++){
        for(int j=0;j<2000;j++){
            matriz[i][j] = aux; encontra_fracao(aux);
            cout<<matriz[i][j];
        }
    }
}

void calcula_sequencia(){
    float valor_inicial = 16;
    for(int i=0;i<2000;i++){
        float resultado=valor_inicial/2;
        vetor[i]=resultado;
        valor_inicial = vetor[i];

            if(vetor[i] < 0){
                float aux = vetor[i];
                encontra_fracao(aux);
            }

    }
    for(int i=0;i<100;i++){
        cout<<vetor[i]<<endl;
    }
}

int main(){
    int op =-1;
    cout<<"1-Calcular somatorio:"<<endl;
    cout<<"0-Sair"<<endl;
    cin>>op;

    if(op == 1){
        calcula_sequencia();
    }

}
