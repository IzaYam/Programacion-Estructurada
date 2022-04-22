#pragma once
#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <time.h>
using namespace std;
void generar_mostrar(int* cod, int** v1) {
    for (int i = 0; i < 25; i++) {
        cod[i] = 1000 + i;
        v1[i][0] = 5 + rand() % (201 - 5); //agua
        v1[i][1] = 10 + rand() % (301 - 10); //luz
        v1[i][2] = 30 + rand() % (501 - 30); //minutos en llamada
    }
    cout << "Codigos\t\tAgua\tLuz\tMinutos en llamadas" << endl;
    for (int i = 0; i < 25; i++) {
        cout << cod[i] << "\t\t";
        cout << v1[i][0] << "\t";
        cout << v1[i][1] << "\t\t" << v1[i][2] << endl;
    }
}
void menor_minutos(int* cod, int** v1) { //3 4 2 5
    int aux1, aux2 = 200;
    for (int i = 0; i < 25; i++) {
        if (aux2 > v1[i][2]) { //200>3=3>4=3>2=2>5=2
            aux2 = v1[i][2];
            aux1 = cod[i];
        }
    }
    cout << "\nMenor numero de minutos consumidos en llamadas: " << endl;
    cout << aux1 << endl << endl;
}
void gastos(int* cod, int** v1) {
    //tarifas: AGUA=3.35 ; LUZ=0.45 ; TELEFONO=0.15
    float agua = 0, luz = 0, minutos = 0;
    cout << "MONTO TOTAL DE GASTOS POR SERVICIO" << endl;
    cout << "Codigos\t\tAgua\tLuz\tMinutos en llamadas\ttotal" << endl;
    for (int i = 0; i < 25; i++) {
        agua = 3.35 * v1[i][0];
        luz = 0.45 * v1[i][1];
        minutos = 0.15 * v1[i][2];
        cout << cod[i] << "\t\t";
        cout << agua << "\t";
        cout << luz << "\t\t" << minutos << "\t" << agua + luz + minutos << endl;
    }
}
void mayor_gastos(int* cod, int** v1) { //mal corregir
    int aux1, aux2 = 100000;
    float agua = 0, luz = 0, minutos = 0;
    float* total = new float[25];
    for (int i = 0; i < 25; i++) {
        agua = 3.35 * v1[i][0];
        luz = 0.45 * v1[i][1];
        minutos = 0.15 * v1[i][2];
        total[i] = agua + luz + minutos;
        if (aux2 > v1[i][2]) {
            aux2 = v1[i][2];
            aux1 = cod[i];
        }
    }
    cout << "\nCodigo del mayor monto total de gastos: " << endl;
    cout << aux1 << endl << endl;
}
int main() {
    srand(time(NULL));
    int* cod = new int[25];
    int** v1 = new int* [25];
    for (int i = 0; i < 25; i++) {
        v1[i] = new int[3];
    }
    generar_mostrar(cod, v1);
    menor_minutos(cod, v1);
    gastos(cod, v1);
    mayor_gastos(cod, v1);
    return 0;
}