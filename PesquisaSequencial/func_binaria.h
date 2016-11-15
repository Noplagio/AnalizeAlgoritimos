#include <iostream>

using namespace std;

class func_binaria{
    public:
        func_binaria();
        void buscarBinaria(int valor_busca, int vetor[]);
};

func_binaria::func_binaria(){
    //construtor
}

void func_binaria::buscarBinaria(int valor_busca, int vetor[]){
     int inicio = 0, fim =10, f=0, meio;
     while(inicio<=fim && f==0)
     {
      meio=(inicio+fim)/2;
      if(valor_busca>vetor[meio])
      {
       inicio=meio+1;
       int valor=vetor[meio];
      }
      else if(valor_busca<vetor[meio])
      {
       fim=meio-1;
      int valor=vetor[meio];
      }
      else
       f=1;
     }
     if(f==1)
     cout<<"valor encontrado, posicao no vetor :  "<<meio ;
     else
     cout<<"valor não encontrado ";
}
