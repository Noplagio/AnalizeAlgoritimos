#include <iostream>
#include <fstream>
#include <string.h>

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


//FUNCAO QUE REALIZA LEITURA DOS DADOS
void carrega_dados_c(){
    int i=0;
    char nuks[80], nomes[27060][80], aux[80];
    FILE*arquivo;
    //ABRINDO ARQUIVO
    arquivo = fopen("nomes2016_2.txt", "r");
    //VARRENDO ATE O FINAL E COLOCANDO NO VETOR
    while(!feof(arquivo)){
        fgets(nuks, 79, arquivo);
        strncpy (nomes[i], nuks, 80); //passando dados para array
        i++;
    }
    //funcao que coloca em ordem alfabetica
    for(int i=0; i<27060; i++) {
        for(int j=0; j<27060; j++) {
            if(strcmp(nomes[i], nomes[j]) < 0) {
                strcpy(aux, nomes[i]);
                strcpy(nomes[i], nomes[j]);
                strcpy(nomes[j], aux);
            }
        }
    }
    //exibindo em tela
    for(int i=0;i<27060;i++){
        cout<<nomes[i]<<endl;
    }



}
//FUNCAO QUE IMPRIME O MENU
int menu(){
    cout<<"Juntando oque precisamos!!"<<endl;
    cout<<"Aguarde::contando dados, e ordenando..."<<endl;
}
//FUNCAO MAIN PRINCIPAL
int main(){
    menu();
    carrega_dados_c();
    return 0;
}
