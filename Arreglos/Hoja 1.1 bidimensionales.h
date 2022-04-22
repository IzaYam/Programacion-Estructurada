#pragma once
#include <iostream>
using namespace std;
void LeerDatos(int** v1, int& n, int& m) {
    int g, s;
    for (int i = 0; i < n; i++) { //filas
        cout << "Fila " << i + 1 << endl;
        for (int j = 0; j < m; j++) { //columnas
            cout << "Ingrese columna " << j + 1 << " : "; cin >> v1[i][j];
            cout << endl;
        }
    }
}
void SumaDatos(int** v1, int& n, int& m) {
    int suma = 0;
    for (int i = 0; i < n; i++) { //filas
        for (int j = 0; j < m; j++) { //columnas
            suma = suma + v1[i][j];
        }
        cout << "Suma para la fila " << i + 1 << " : " << suma;
        cout << endl;
        suma == 0;
    }
}
void MenorDato(int** v1, int& n, int& m) {
    int aux = 0;
    for (int i = 0; i < n; i++) { //filas
        for (int j = 0; j < m; j++) { //columnas
            if (aux < v1[i][j]) {
                aux = v1[i][j];
            }
        }
        cout << "El menor de la fila " << i + 1 << " : " << aux;
        cout << endl;
    }
}
void promedio(int** v1, int& n, int& m) {
    int prom = 0, aux = 0;
    for (int j = 0; j < m; j++) { //columnas
        for (int i = 0; i < n; i++) { //filas
            prom = prom + v1[j][i];
        }
        cout << "Promedio columna " << j + 1 << " : " << prom / m;
        cout << endl;
    }
}
void MayorValor(int** v1, int& n, int& m) {
    int aux = 0;
    for (int j = 0; j < m; j++) { //columnas
        for (int i = 0; i < n; i++) { //filas
            if (aux < v1[i][j]) {
                aux = v1[i][j];
            }
        }
        cout << "El mayor de la columna " << j + 1 << " : " << aux;
        cout << endl;
    }
}
int main() {
    int n;
    int m;
    do {
        cout << "Ingrese filas(n): "; cin >> n;
        cout << "Ingrese columnas(m): "; cin >> m;
    } while ((n <= 0 || n > 10) || (m <= 0 || m > 10));
    int** matriz = new int* [n];
    matriz[n] = new int[m];
    LeerDatos(matriz, n, m);
    SumaDatos(matriz, n, m);
    MenorDato(matriz, n, m);
    promedio(matriz, n, m);
    MayorValor(matriz, n, m);
    return 0;
}