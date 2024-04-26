#include <iostream>
#include <string>
using namespace std;

int main(){
        int num[] = {1, 2, 3, 4, 5,6,7,8,9};

        int size = sizeof(num)/sizeof(num[0]);
        /*for(int i=0;i<size;i++){
        cout << num[i] << endl;
        }*/
        int nuevo = 10;

        int nuevoTamanio = size + 1;

        int nuevoArray[nuevoTamanio];

        copy(num, num + size, nuevoArray);

        nuevoArray[size] = nuevo;

        for(int i=0;i<nuevoTamanio;i++){
            cout << nuevoArray[i] << endl;
        }
}

