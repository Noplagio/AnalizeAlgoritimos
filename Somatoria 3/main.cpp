#include <iostream>
#include <math.h>

using namespace std;



void calcula(int n){
    int soma = 0;
    int re;
    int resul = 1;
    for(int i=1; i<= n; i++)
    {
        re = pow(-1,n)*pow(n,2*n)/(2*n);
        while (re != 1){
        resul = resul*re;
        re--;
    }

    soma = soma + resul;

    }

    cout << "O coseno é: " << endl;
    cout << soma;

}


int main()
{

    int n;

    cout << "Digite quantos termos usar: " << endl;
    cin >> n;

    calcula(n);

    return 0;

}
