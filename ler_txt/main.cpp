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

void carrega_dados_c(){
    FILE*auxilio=NULL;
    char nuks[80];
    string nomes[27060];
    FILE*arquivo;
    arquivo = fopen("nomes2016_2.txt", "r");
    while(!feof(arquivo)){

        fgets(nuks, 79, arquivo);
        printf("%s\n",nuks);
    }

    /*for(int i=0;i<27060;i++){
        cout<<nomes[i]<<endl;
    }*/

}

int menu(){
    cout<<"Juntando oque precisamos!!"<<endl;
    cout<<"Em breve teremos o array completo carregado!!"<<endl;
}

int main(){
    menu();
    //carrega_dados();
    carrega_dados_c();
    return 0;
}
