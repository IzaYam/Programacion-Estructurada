#pragma once
#include<iostream>
#include<conio.h>
using namespace std;
void Menu()
{
    cout << endl; cout << endl;
    cout << "MENU PRINCIPAL" << endl;
    cout << "A. Suma 2 numero complejos " << endl;
    cout << "B. Restar 2 numeros complejos " << endl;
    cout << "X. Salir del programa " << endl;
}
void sumaImaginario(float* partereal1, int* parteIm1, float* partereal2, int* parteIm2) {
    cout << "Numero 1" << endl;
    cout << "Parte real 1: "; cin >> *partereal1;
    cout << "Parte imaginaria 1: "; cin >> *parteIm1;

    cout << "Numero 2" << endl;
    cout << "Parte real 2: "; cin >> *partereal2;
    cout << "Parte imaginaria 2: "; cin >> *parteIm2;
    cout << "(" << *partereal1 << " + " << *parteIm1 << "i)+(" << *partereal2 << " + "
        << *parteIm2 << "i) = (" << *partereal1 + *partereal2 << " + "
        << *parteIm1 + *parteIm2 << "i)";
}
int main() {
    float* partereal1 = new float, * partereal2 = new float;
    int* parteIm1 = new int, * parteIm2 = new int;

    char opcion;
    while (1) {
        Menu();
        cout << "Ingrese la opcion: "; cin >> opcion;
        switch (opcion)
        {
        case 'A':
            cout << endl << "FUNCION SUMA IMAGINARIOS" << endl;
            sumaImaginario(partereal1, parteIm1, partereal2, parteIm2);
            _getch();
            cout << endl << "Presione una tecla para continuar" << endl;
            break;
        case 'B':
            break;
        case'x':
            cout << "Salir del programa";
            _getch();
            exit(0);
            break;
        default:
            break;
        }

    }

    _getch();
}