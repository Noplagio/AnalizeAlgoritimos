/*
*
*ALGORITIMO CAPAZ DE LER OS DADOS DE UM TXT DE ORIGEM,
*ORDENALOS EM UM ARRAY E ESCREVER NOVAMENTE OS DADOS
*ORDENADOS EM OUTRO ARQUIVO TXT
*
* Desenvolvedores: Eduardo Spillere Anzolin, Victor Pavei Goes.
* Data:03/12/2016
* Local: UNESC - SC
*
*/

#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;


//FUNCAO QUE REALIZA LEITURA DOS DADOS
void carrega_dados_c(){
    int i=0;
    char nuks[20], nomes[27060][80], aux[80];
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
    //escrevendo ordenado dentro de outro arquivo
    ofstream arq;
    arq.open("ordenado.txt", ios::app);
    for(int i=0;i<27060;i++){
        arq << nomes[i];
    }
    cout<<"Pronto verifique os dados ordenados no novo arquivo gerado!!"<<endl;
    cout<<"OBS: Em alguns editores de texto, o padrao utf-8 pode apresentar alguns bugs relacionados aos ascentos"<<endl;

}
//FUNCAO QUE IMPRIME O MENU
int menu(){
    cout<<"Juntando oque precisamos!!"<<endl;
    cout<<"Aguarde::contando dados, e ordenando...isso pode demorar"<<endl;
}
//FUNCAO MAIN PRINCIPAL
int main(){
    menu();
    carrega_dados_c();
    return 0;
}
