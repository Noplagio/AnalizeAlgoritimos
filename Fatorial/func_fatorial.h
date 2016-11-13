#include <iostream>

using namespace std;

class func_fatorial{
    public:
        func_fatorial();
         ~func_fatorial();
        void calcular_fatorial(int numero);

};

func_fatorial::func_fatorial(){
    //construtor
}

func_fatorial:: ~func_fatorial(){
    //destrutor
}

void func_fatorial::calcular_fatorial(int numero){

    int resultado = 1;
    while (numero != 1){
        resultado = resultado*numero;
        numero--;
    }
    cout<<resultado<<endl;
}
