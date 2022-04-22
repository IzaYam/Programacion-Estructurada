#pragma once
//#include "pch.h"
#include <iostream>
#include <time.h>
//using namespace System;
using namespace std;
void generar_tallas(double* chicas, int& n) {
    Random r; //mejor cambiar al otro rand
    cout << "===== TALLAS =====" << endl;
    for (int i = 0; i <= n; i++) {
        chicas[i] = r.Next(2.21 - 1.55); //no hay errores, pero igual no sale bien idk
        cout << "Chica " << i + 1 << " : " << chicas[i] << endl;
    }
}
void ascendente(double* chicas, int& n) {
    int aux = 0;
    cout << "===== ASCENDENTE =====" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (chicas[i] > chicas[j]) {
                aux = chicas[i];
                chicas[i] = chicas[j];
                chicas[j] = aux;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        cout << "chica " << i + 1 << " : ";
        cout << chicas[i] << endl;
    }
}
void promedio(double* chicas, int& n) {
    int prom = 0;
    cout << "===== PROMEDIO =====" << endl;
    for (int i = 0; i <= n; i++) {
        prom = prom + chicas[i];
    }
    cout << "Promedio: " << prom / n << endl;
}
void desempeno(double* chicas, int& n) {
    int libero = 0, levan = 0, mata = 0;
    for (int i = 0; i <= n; i++) {
        if (chicas[i] >= 1.55 || chicas[i] <= 1.69) //libero
            libero++;
        if (chicas[i] >= 1.7 || chicas[i] <= 1.85) //levantadoras
            levan++;
        if (chicas[i] >= 1.86) //matadoras
            mata++;

    }
    cout << "Numero de chicas libero: " << libero << endl;
    cout << "Numero de chicas levantadoras: " << levan << endl;
    cout << "Numero de chicas matadoras: " << mata << endl;
    if (mata < n / 2) cout << "Realizar nueva convocatoria" << endl;
}
int main() {
    srand(time(NULL)); Random r;
    double* chicas = new double[80];
    int n;
    do {
        cout << "Ingrese el total de chicas en la liga: "; cin >> n;
    } while (n <= 0 || n > 80);
    generar_tallas(chicas, n);
    ascendente(chicas, n);
    promedio(chicas, n);
    desempeno(chicas, n);
    return 0;
}
