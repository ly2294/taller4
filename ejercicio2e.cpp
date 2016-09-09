# include <iostream>
#define L 5

using namespace std;
int main (){
    int arreglo [L];
        for (int i=0; i<L; i++){

                cout  << " ingrese un valor para la posicion" << endl;
                cin >> arreglo [i];

                }

                cout << " los valores ingresados son" << endl;
                 for(int i =0; i < L ; i++){
                    cout << arreglo [i]<<"-";
                    }

                 return 0;

    }
