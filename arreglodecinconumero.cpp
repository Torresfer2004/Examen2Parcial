//Programa:arreglodecinconumero
//autor:Fernanda Torres
//fecha:2023-11-24
#include <iostream>

using namespace std;

int main() {
    int numeros[5];1

    int suma = 0;
    int i = 0;

    do {
        cout << "Ingresa el valor para el elemento " << i + 1 << ": ";
        cin >> numeros[i];                                                              

        suma = suma +  numeros[i];
        i++;
    } while (i < 5);


    cout << "La suma de los elementos del arreglo es: " << suma << endl;

    return 0;
}
