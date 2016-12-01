#include <iostream>
#include <sstream>
#include <fstream>
using namespace std;

class arquivo{
    public:
    arquivo();
    void carregar_txt();
};

arquivo::arquivo(){
    //construtor
}
void arquivo::carregar_txt(){
    ifstream arquivo;
    string vetor[FILENAME_MAX];

    arquivo.open("nomes2016_2", ios::in);

}

