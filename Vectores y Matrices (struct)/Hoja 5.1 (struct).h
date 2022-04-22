#pragma once
#include <iostream>
#include <time.h>
using namespace std;
struct alumno {
    int* tema = new int[30];
    int* puntaje = new int[30];
};
void generar_mostrar(alumno* v1) {
    for (int i = 0; i < 30; i++) {
        v1[i].tema[i] = 1 + rand() % (4 - 1);
        v1[i].puntaje[i] = 1 + rand() % (51 - 1);
        cout << "ALUMNO " << i + 1 << " : " << endl;
        cout << "Tema: " << v1[i].tema[i] << "\tPuntaje: " << v1[i].puntaje[i] << endl;
    }
}
void Lista_EncimadelPromedio(alumno* v1) {
    int suma = 0, prom;
    for (int i = 0; i < 30; i++) { //calcular el promedio
        suma = suma + v1[i].puntaje[i];
    }
    prom = suma / 30;
    cout << "==== MAYOR AL PROMEDIO ====" << prom << endl;
    for (int i = 0; i < 30; i++) {
        if (v1[i].puntaje[i] > prom) {
            cout << "Tema\tPuntaje" << endl;
            cout << v1[i].tema[i] << "\t" << v1[i].puntaje[i] << endl;
        }
    }
}
void Devuelve_mayor(alumno* v1) {
    int mayor = 0;
    cout << "==== MAYOR PUNTAJE ====" << endl;
    for (int i = 0; i < 30; i++) {
        if (v1[i].puntaje[i] == 50) mayor++;
    }
    cout << "Numero de alumnos: " << mayor << endl;
}
int main() {
    srand(time(NULL));
    alumno* VAlumnos = new alumno[30];
    generar_mostrar(VAlumnos);
    Lista_EncimadelPromedio(VAlumnos);
    Devuelve_mayor(VAlumnos);
    return 0;
}