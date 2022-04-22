#pragma once
#include <iostream>
using namespace std;
int main() {
    int n, m;
    do {
        cout << "Ingrese filas(n): "; cin >> n;
        cout << "Ingrese columnas(m): "; cin >> m;
    } while (n <= 0 || m <= 0);
    int** matriz = new int* [n];
    matriz[n] = new int[m];
    for (int i = 0; i < n; i++) { //filas
        for (int j = 0; i < m; j++) {
            if (matriz[i][j] == matriz[j][i])
                //falta hacer, se puso el "continue" para evitar error
                continue;
        }
    }
    cout << "Si es simetrica!";
    return 0;
}