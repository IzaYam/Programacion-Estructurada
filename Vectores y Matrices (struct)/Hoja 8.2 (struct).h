#pragma once
#include <iostream>
#include <time.h>
using namespace std;
struct empleados {
    int* trabaja = new int[15];
    char* oficina = new char[15];
    int* tardanza = new int[15];
};
void genera_arreglo(empleados* v1) {
    int aux;
    for (int i = 0; i < 15; i++) {
        v1[i].trabaja[i] = 20 + rand() % (51 - 20);
        aux = 1 + rand() % (4 - 1);
        if (aux == 1) v1[i].oficina[i] = 'C';
        if (aux == 2) v1[i].oficina[i] = 'S';
        if (aux == 3) v1[i].oficina[i] = 'L';
        v1[i].tardanza[i] = 0 + rand() % (181 - 0);
    }
}
void imprime_arreglo(empleados* v1) {
    cout << "  Horas Trabajadas\t\tOficina\tMinutos de Tardanza" << endl;
    for (int i = 0; i < 15; i++) {
        cout << i << " " << v1[i].trabaja[i] << "\t\t";
        cout << v1[i].oficina[i] << "\t\t";
        cout << v1[i].tardanza[i] << endl;
    }
}
void promedio_horas_oficina(empleados* v1) {
    int c = 0, s = 0, l = 0;
    int c1 = 0, s1 = 0, l1 = 0;
    cout << "\nPROMEDIO DE HORAS TRABAJAS POR OFICINA\n";
    for (int i = 0; i < 15; i++) {
        if (v1[i].oficina[i] == 'C') {
            c = c + v1[i].trabaja[i];
            c1++;
        }
        if (v1[i].oficina[i] == 'S') {
            s = s + v1[i].trabaja[i];
            s1++;
        }
        if (v1[i].oficina[i] == 'L') {
            l = l + v1[i].trabaja[i];
            l1++;
        }
    }
    cout << "Contabilidad: " << c / c1 << endl;
    cout << "Sistemas: " << s / s1 << endl;
    cout << "Logistica: " << l / l1 << endl;
}
void empleados_puntuales(empleados* v1) {
    cout << "\nEMPLEADOS PUNTUALES\n";
    for (int i = 0; i < 15; i++) {
        if (v1[i].tardanza[i] == 0) {
            cout << "Empleado puntual: ";
            cout << i << "\t" << v1[i].trabaja[i] << "\t";
            cout << v1[i].oficina[i] << endl;
        }
    }
}
void ordena_arreglo(empleados* v1) {
    int aux;
    cout << "\nORDENADO TARDANZA DE FORMA ASCENDENTE\n";
    for (int i = 0; i < 15; i++) {
        for (int j = i + 1; j < 15; j++) {
            if (v1[i].tardanza[j] > v1[j].tardanza[j]) {
                aux = v1[i].tardanza[i];
                v1[i].tardanza[i] = v1[j].tardanza[j];
                v1[j].tardanza[j] = aux;
            }
        }
        cout << v1[i].oficina[i] << "\t" << v1[i].tardanza[i] << endl;
    }
}
int main() {
    srand(time(NULL));
    empleados* v1 = new empleados[15];
    genera_arreglo(v1);
    imprime_arreglo(v1);
    promedio_horas_oficina(v1);
    empleados_puntuales(v1);
    ordena_arreglo(v1);
    return 0;
}