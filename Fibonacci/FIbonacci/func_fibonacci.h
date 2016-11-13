
#include <iostream>

using namespace std;

class func_fibonacci{
    public:
        func_fibonacci();
         ~func_fibonacci();
        void calcular(int numero);

};

func_fibonacci::func_fibonacci(){
    //construtor
}

func_fibonacci:: ~func_fibonacci(){
    //destrutor
}

void func_fibonacci::calcular(int numero){

    int resultado = 1, aux, n1=0, n2=1;
    cout << "\n" << "Serie fibonacci >>" << n1 << " ";
    while (numero > 0){
      cout << n2 << " ";
      aux = n2;
      n2 += n1;
      n1 = aux;
      numero--;
    }
    cout<<"\n";
}
