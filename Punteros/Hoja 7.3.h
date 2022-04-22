#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <time.h>
using namespace std;
//funciona en devc++ aqui no, nose porque
void generar_mostrardatos() {
    char* vpuntaje = new char[40];
    int a = 0, b = 0, c = 0;
    int total;
    srand(time(NULL));
    for (int i = 1; i <= 40; i++) {
        cout << "Puntaje " << i << ": ";
        vpuntaje[i] = 'A' + rand() % ('D' - 'A');
        cout << vpuntaje[i] << endl;
        if (vpuntaje[i] == 'A')
            a++;
        if (vpuntaje[i] == 'B')
            b++;
        if (vpuntaje[i] == 'C')
            c++;
    }
    cout << endl << "PUNTAJES ACUMULADOS";
    cout << endl << "total de A: " << a << endl;
    cout << "total de B: " << b << endl;
    cout << "total de C: " << c << endl;
    cout << endl << "FUE APROBADO O NO?" << endl;
    total = a + b + c;
    if (a > total / 2)
        cout << "SABOR APROBADO";
    else
        cout << "SABOR DESAPROBADO";
}
int main() {
    generar_mostrardatos();
}