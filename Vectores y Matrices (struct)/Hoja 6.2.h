#pragma once
//#include "pch.h"
#include <iostream>
#include <time.h>
using namespace std;
//using namespace System;
void generar(int& n, int** v_18, int** v_19, int* cod) {
    for (int i = 0; i < n; i++) { //codigos
        cod[i] = 100 + i;
    }
    for (int i = 0; i < n; i++) { //filas
        for (int j = 1; j <= 4; j++) { //columnas
            v_18[i][j] = 100 + rand() % (1001 - 100);
            v_19[i][j] = 100 + rand() % (1001 - 100);
        }
    }
}
void mostrar(int& n, int** v_18, int** v_19, int* cod) {
    cout << "Codigos\t\t\tAnio 2018\t\t\tAnio 2019" << endl;
    //Console::SetCursorPosition(18, 3);
    cout << "1    2    3    4              1    2    3    4" << endl;
    for (int i = 0; i < n; i++) {
        cout << cod[i] << "\t";
        for (int j = 1; j <= 4; j++) {
            cout << v_18[i][j] << " ";
        }
        cout << "\t";
        for (int j = 1; j <= 4; j++) {
            cout << v_19[i][j] << " ";
        }
        cout << endl;
    }
}
void encontrar(int& n, int* cod, int** v_19, int& buscar) {
    int aux;
    for (int i = 0; i < n; i++) {
        if (buscar == cod[i]) {
            cout << "Codigo \t\t\tAnio 2019" << endl;
            //Console::SetCursorPosition(18, 3);
            cout << "1    2    3    4" << endl;
            for (int i = 0; i < n; i++) {
                cout << cod[i] << "\t";
                for (int j = 1; j <= 4; j++) {
                    cout << v_19[i][j] << " ";
                }
                cout << endl;
            }
        }
        else
            cout << "NO SE ENCONTRO" << endl;
    }
}
void promedio(int& n, int** v_18) {
    int prom = 0;
    for (int i = 0; i < n; i++) {
        prom = prom + v_18[i][3];
    }
    cout << "\nPromedio de las ventas en el 3trimestre del 2018" << prom / n << endl;
}
int main() {
    srand(time(NULL));
    int n, buscar;
    cout << "Ingrese n: "; cin >> n;
    int* cod = new int[n];
    int** v_18 = new int* [n];
    v_18[n] = new int[5];
    int** v_19 = new int* [n];
    v_19[n] = new int[5];
    generar(n, v_18, v_19, cod);
    mostrar(n, v_18, v_19, cod);
    cout << "\nCodigo a buscar: "; cin >> buscar;
    encontrar(n, cod, v_19, buscar);
    promedio(n, v_18);
    return 0;
}