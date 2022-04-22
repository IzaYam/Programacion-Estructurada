#pragma once
#include <iostream>
#include <time.h>
using namespace std;
void generar_ventas(int* v_18, int* v_19) {
    for (int i = 1; i <= 12; i++) {
        v_18[i] = 1 + rand() % (31 - 1);
        v_19[i] = 1 + rand() % (31 - 1);
    }
}
void imprimeBarras(int* v_18, int* v_19) {
    int aux, aux2;
    cout << "Ventas del anio 2018" << endl << endl;
    for (int i = 1; i <= 12; i++) {
        aux = v_18[i];
        for (int i = 1; i <= aux; i++) {
            cout << "#";
        }
        cout << "(" << v_18[i] << ")" << endl;
    }
    cout << "\nVentas del anio 2019" << endl << endl;
    for (int i = 1; i <= 12; i++) {
        aux2 = v_19[i];
        for (int i = 1; i <= aux2; i++) {
            cout << "#";
        }
        cout << "(" << v_19[i] << ")" << endl;
    }
}
int main() {
    srand(time(NULL));
    int* v_18 = new int[12];
    int* v_19 = new int[12];
    generar_ventas(v_18, v_19);
    imprimeBarras(v_18, v_19);
    return 0;
}