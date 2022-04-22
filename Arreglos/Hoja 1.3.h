#pragma once
#include <iostream>
#include <time.h>
using namespace std;
void edades() {
    int* N = new int[100];
    int i; int gg = 0;  int personas = 0, aux = 100, edad; int n; int buscar = 0;
    cout << "Ingrese el numero de personas: "; cin >> n;
    cout << "Edad a buscar: "; cin >> edad;
    srand(time(NULL));
    for (i = 1; i <= n; i++) {
        cout << "Edad " << i << " : ";
        N[i] = 1 + rand() % (101 - 1);
        cout << N[i] << endl;
        if (N[i] < aux) {
            aux = N[i];
            gg = i;
        }
        if (N[i] >= 30 && N[i] <= 50)
            personas++;
        if (N[i] == edad)
            buscar++;
    }
    if (buscar == 1)
        cout << "SE ENCONTRO" << endl;
    else
        if (buscar == 0)
            cout << "NO SE ENCONTRO" << endl;
    cout << "Menor edad: " << aux << endl;
    cout << "Posicion del de menor edad: " << gg << endl;
    cout << "El numero de personas con edades entre 30 y 50: " << personas << endl;
}
int main() {
    edades();
    // COMPLETAR FALTA POSICION DEL MENOR 
}
