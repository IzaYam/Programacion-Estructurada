#pragma once
#include <iostream>
#include <math.h>
using namespace std;
void area_volumen(int& r) {
    double area = 0, volumen = 0;
    volumen = 4 / 3 * 3.14 * pow(r, 3);
    area = 4 * 3.14 * pow(r, 2);
    cout << "El area es: " << area << endl;
    cout << "El volumen es: " << volumen;
}
int main() {
    int* r = new int;
    do {
        cout << "Ingrese el radio: "; cin >> *r;
    } while (r <= 0);
    area_volumen(*r);
}