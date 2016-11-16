#include <iostream>

using namespace std;

int main()
{

    float soma, n = 9, j;
    int i =0;

    soma = 0.75;
    j = 1/n;
    cout << soma << endl;
    cout << j << endl;

    while(i<2000){


       soma = soma + j;
       n = n + 9;
       j* -1;
       i++;

    }
    cout << "A soma da sequencia é: " << endl;
    cout << soma << endl;
}
