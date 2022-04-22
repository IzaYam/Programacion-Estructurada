#pragma once
#include <iostream>
#include <time.h>
using namespace std;
void generar_mostrar(int* mensaje, int& longitud) {
    int aux;
    for (int i = 0; i < longitud; i++) {
        aux = 1 + rand() % (4 - 1);
        if (aux == 1) mensaje[i] = 0;
        if (aux == 2) mensaje[i] = 2;
        if (aux == 3) mensaje[i] = 5;
        cout << mensaje[i] << " ";
    }
    cout << endl << endl;
}
int mensajes(int* mensaje, int& longitud) {
    int frio = 0, calor = 0, hambre = 0, total = 0;
    for (int i = 0; i < longitud; i++) {
        if (mensaje[0] == 2 && mensaje[1] == 5 && mensaje[2] == 2) {
            cout << "Las personas tienen frio\n"; frio++; total++;
        }
        if (mensaje[longitud - 2] == 5 && mensaje[longitud - 1] == 0 && mensaje[longitud] == 2) {
            cout << "Las personas tienen hambre\n"; hambre++; total++;
        } //se imprimen varias veces el mensaje este y el de peligro
    }
    for (int i = 4; i < longitud - 2; i++) {
        if (mensaje[i] == 2 && mensaje[i + 1] == 0 && mensaje[i + 2] == 2) {
            cout << "Las personas tienen calor\n" << endl; calor++; total++;
        }
    }
    for (int i = i; i < longitud; i++) {
        if (mensaje[i] == 0 && mensaje[i + 1] == 0 && mensaje[i + 2] == 0) {
            cout << "Peligro!" << endl; total++;
        }
    }
    cout << "\nNUMERO DE PERSONAS POR MENSAJE\n";
    cout << "Abrigo: " << frio << endl;
    cout << "Agua: " << calor << endl;
    cout << "Alimento: " << hambre << endl;
    return total;
}
int main() {
    srand(time(NULL));
    int* mensaje = new int[20];
    int longitud, opcion, total;
    while (1) {
        cout << "\nMENU\n";
        cout << "1.Generar mensaje" << endl;
        cout << "2. Salir" << endl;
        cout << "Opcion: "; cin >> opcion;
        if (opcion == 1) {
            longitud = 10 + rand() % (21 - 10);
            generar_mostrar(mensaje, longitud);
            mensajes(mensaje, longitud);
        }
        if (opcion == 2)
            exit(0);
    }
    total = mensajes(mensaje, longitud);
    cout << "\nNumero de mensajes enviados: " << total << endl;
    return 0;
}