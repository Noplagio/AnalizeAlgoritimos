#include <iostream>
#include <fstream>

using namespace std;


void carrega_dados(){
    ifstream arq;
    string nome;
    arq.open("nomes2016_2.txt", ios::in);

     if(arq.fail() == 1){
                    cout<<"Arquivo inexistente!! erro fatal!!";
                }
                else{
                    while(!arq.eof()){
                        arq >> nome;
                        cout<<nome<<endl;

                    }
                    arq.close();
                }

}

int menu(){
    cout<<"Juntando oque precisamos!!"<<endl;
    cout<<"Em breve teremos o array completo carregado!!"<<endl;
}

int main(){
    menu();
    carrega_dados();
}
