/*
 *FUNÇÃO DESENVOLVIDA POR EDUARDO SPILLERE ANZOLIN E VICTOR PAVEI GOES
 *CODIGO: DE SEQUENCIA SOMATORIA
 *DATA: 15/11/2016
 *LOCAL: Unesc - sc
*/
#include <iostream>

using namespace std;

void cria_sequencia(int n){
    int j=1;
    cout<<"\n"<<endl;
    for(int i=1;i<n;i++){
        cout<<i<<i+3<<i+3;
    }
    cout<<"\n"<<endl;
}


int main(){

    int n;
    cout<<"Informe o tamanho da sequencia:"<<endl;
    cin>>n;

    cout<<"Criando sequencia!!"<<endl;

    cria_sequencia(n);

}
