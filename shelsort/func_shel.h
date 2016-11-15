#include <iostream>

using namespace std;

class func_shel{
    public:
        func_shel();
        void orderna(int vetor[]);
};

func_shel::func_shel(){
    //construtor
}

void func_shel::orderna(int vetor[]){

    int gap, i, j, temp;



    for (gap = 10/2; gap > 0; gap /= 2)

        for (i = gap; i < 10; i++)

            for (j=i-gap; j>=0 && vetor[j]>vetor[j+gap]; j-=gap) {

                temp = vetor[j];

                vetor[j] = vetor[j+gap];

                vetor[j+gap] = temp;

            }

            for(int i=0;i<10;i++){
                cout<<vetor[i]<<endl;
            }

}

