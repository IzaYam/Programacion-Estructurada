#pragma once
#include <iostream>
#include <time.h>
using namespace std;
struct encuesta {
    int* aprobacion = new int[100];
    int* edad = new int[100];
    char* depa = new char[100];
};
void generar_datos(int& n, encuesta* v1) {
    int aux;
    for (int i = 0; i < n; i++) {
        v1[i].aprobacion[i] = 1 + rand() % (6 - 1);
        v1[i].edad[i] = 18 + rand() % (100 - 18);
        aux = 1 + rand() % (5 - 1); //1=A - 2=C - 3=L - 4=P
        if (aux == 1) v1[i].depa[i] = 'A';
        if (aux == 2) v1[i].depa[i] = 'C';
        if (aux == 3) v1[i].depa[i] = 'L';
        if (aux == 4) v1[i].depa[i] = 'P';
    }
}
void mostrar_datos(int& n, encuesta* v1) {
    cout << "persona\t   aprobacion\tedad\tdepartamento" << endl;
    for (int i = 0; i < n; i++) {
        cout << "   " << i + 1 << "\t\t" << v1[i].aprobacion[i] << "\t ";
        cout << v1[i].edad[i] << "\t\t" << v1[i].depa[i] << endl;
    }
}
void votacion(int& n, encuesta* v1) {
    int pesimo = 0, excelente = 0;
    cout << endl << "==== Nivel de aprobacion ====" << endl;
    for (int i = 0; i < n; i++) {
        if (v1[i].aprobacion[i] == 1) pesimo++;
        if (v1[i].aprobacion[i] == 5) excelente++;
    }
    cout << "aprobacion == pesimo: " << pesimo << endl;
    cout << "aprobacion == excelente: " << excelente << endl;
}
void departamento(int& n, encuesta* v1) {
    int cajamarca = 0, puno = 0;
    cout << endl << "==== personas por departamento ====" << endl;
    for (int i = 0; i < n; i++) {
        if (v1[i].depa[i] == 'C') cajamarca++;
        if (v1[i].depa[i] == 'P') puno++;
    }
    cout << "departamento == cajamarca: " << cajamarca << endl;
    cout << "departamento == puno: " << puno << endl;
}
void descendente(int& n, encuesta* v1) {
    int aux;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (v1[i].edad[i] < v1[j].edad[j]) {
                aux = v1[i].edad[i];
                v1[i].edad[i] = v1[j].edad[j];
                v1[j].edad[j] = aux;
            }
        }
        cout << "edad " << i + 1 << " :";
        cout << v1[i].edad[i] << endl;
    }
}
int main() {
    srand(time(NULL));
    int n;
    do {
        cout << "Ingrese numero de personas encuestadas: "; cin >> n;
    } while (n <= 0 || n > 100);
    encuesta* v1 = new encuesta[n];
    generar_datos(n, v1);
    mostrar_datos(n, v1);
    votacion(n, v1);
    departamento(n, v1);
    descendente(n, v1);
    return 0;
}