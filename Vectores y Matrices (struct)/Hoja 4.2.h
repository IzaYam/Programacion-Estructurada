#pragma once
#include <iostream>
#include <time.h>
using namespace std;
void generar_datos(int** conductor) {
    for (int i = 0; i < 20; i++) {
        for (int j = 0; i < 6; j++) {
            conductor[i][j] = 1 + rand() % (26 - 1); //no deja compilar idk
        }
    }
}
void imprimir(int** conductor) {
    for (int i = 0; i < 20; i++) {
        cout << "Conductor " << i + 1 << endl;
        for (int j = 0; i < 6; j++) {
            cout << "Dia " << j + 1 << conductor[i][j] << endl;
        }
    }
}
void transportados(int** conductor) {
    cout << "==== pasajeros transportados en la semana por conductor ====" << endl;
    int suma = 0;
    for (int i = 0; i < 20; i++) {
        for (int j = 0; i < 6; j++) {
            suma = suma + conductor[i][j];
        }
        cout << "Conductor " << i + 1 << suma << endl;
    }
}
void promedio(int** conductor) {
    cout << "==== promedio de pasajeros transportados por dia ====" << endl;
    int suma1 = 0, suma2 = 0, suma3 = 0, suma4 = 0, suma5 = 0, suma6 = 0;
    for (int i = 0; i < 20; i++) {
        for (int j = 0; i < 6; j++) {
            if (j == 0) suma1 = suma1 + conductor[i][0];
            else if (j == 1) suma2 = suma2 + conductor[i][1];
            else if (j == 2) suma3 = suma3 + conductor[i][2];
            else if (j == 3) suma4 = suma4 + conductor[i][3];
            else if (j == 4) suma5 = suma5 + conductor[i][4];
            else if (j == 5) suma6 = suma6 + conductor[i][5];
        }
    }
    cout << "Dia 1: " << double(suma1 / 20) << endl;
    cout << "Dia 2: " << double(suma2 / 20) << endl;
    cout << "Dia 3: " << double(suma3 / 20) << endl;
    cout << "Dia 4: " << double(suma4 / 20) << endl;
    cout << "Dia 5: " << double(suma5 / 20) << endl;
    cout << "Dia 6: " << double(suma6 / 20) << endl;
}
void mayor(int** conductor) {
    cout << "==== Dia en el que se registro un mayor #_pasajeros" << endl;
}
int main() {
    srand(time(NULL));
    int** conductor = new int* [20];
    conductor[20] = new int[6];
    generar_datos(conductor);
    imprimir(conductor);
    transportados(conductor);
    promedio(conductor);
}