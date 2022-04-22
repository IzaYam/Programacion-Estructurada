#pragma once
#include <iostream>
using namespace std;
void lenguaje() {
    int* notas; int j, total = 0, aux1 = 0;
    cout << "Ingrese el numero de alumnos: "; cin >> j;
    int aux2 = 20;
    for (int i = 1; i <= j; i++) {
        cout << "Nota alumno " << i << " : "; cin >> notas[i];
        total = total + notas[i];
        if (notas[i] > aux1) //mas alta
            notas[i] = aux1;
        if (notas[i] < aux2)//mas baja
            notas[i] = aux2;
    }
    cout << "Promedio de notas: " << total / j << endl;
    cout << "La maxima nota: " << aux1 << endl;
    cout << "La minima nota: " << aux2 << endl;
}
int main() {
    lenguaje();
    // FALTA LA MODA
}
