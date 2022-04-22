#pragma once
#include <iostream>
using namespace std;
int main() {
    int varA;
    int varB;
    varA = 90;
    varB = 120;
    cout << varA << endl;
    cout << varB << endl;

    cout << &varA << endl;
    cout << &varB << endl;

    int* penteroA = &varA;
    int* penteroB = &varB;
    *penteroB = 45;
    cout << *penteroA << endl;
    cout << *penteroB << endl;

    int n1 = 20;
    int n2 = 30;
    int* p1;
    p1 = &n1;
    int* p2 = &n2;
    int resultado = DameSuma(p1, p2);
    cout << n1 << "+" << n2;
    cout << "La suma es " << resultado;
}
int DameSuma(int* p1, int* p2) {
    *p1 = 5; *p2 = 8;
    int suma = *p1 + *p2;
    return suma;
}