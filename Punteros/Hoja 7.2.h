#pragma once
#include <iostream>
#include <math.h>
using namespace std;
float area(int& a) {
    float area;
    area = pow(a, 2) * sqrt(3);
    return area;
}
float volumen(int& a) {
    float volumen;
    volumen = (sqrt(2) / 12) * pow(a, 3);
    return volumen;
}
int main() {
    int* a = new int;
    do {
        cout << "Ingrese arista: "; cin >> *a;
    } while (*a <= 0);
    cout << "AREA" << endl;
    cout << area(*a) << endl;
    cout << "VOLUMEN" << endl;
    cout << volumen(*a);
}