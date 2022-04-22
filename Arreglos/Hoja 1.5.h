#pragma once
#include <iostream>
using namespace std;
void ingles() {
    int* parcial = new int[40]; int N;
    int baja = 0; int alta = 0, aprobados = 0, desaprobados = 0;
    cout << "Ingrese numero de alumnos: "; cin >> N;
    for (int i = 1; i <= N; i++) {
        cout << "Nota parcial " << i << " : "; cin >> parcial[i];
        if (parcial[i] == 00)
            baja++;
        if (parcial[i] == 20)
            alta++;
        if (parcial[i] >= 13)
            aprobados++;
        if (parcial[i] < 13)
            desaprobados++;
    }
    cout << "Numero de personas que obtuvieron 00: " << baja << endl;
    cout << "Numero de personas que obtuvieron 20: " << alta << endl;
    cout << "Numero de personas aprobados: " << aprobados << endl;
    cout << "Numero de personas desaprobados: " << desaprobados << endl;
}
int main() {
    ingles();
}