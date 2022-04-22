#pragma once
#include <iostream>
using namespace std;
void aprobados_ej2() {
	int* Vnotas;
	int j;
	cout << "Ingrese total de notas a ingresar: "; cin >> j;
	Vnotas = new int[j];
	for (int i = 1; i <= j; i++) {
		cout << endl << "Ingrese nota" << i << ": "; cin >> Vnotas[i];
		if (Vnotas[i] >= 13 && Vnotas[i] <= 20) {
			cout << "APROBO";
		}
		else
			if (Vnotas[i] < 13 && Vnotas[i]>0) {
				cout << "DESAPROBO";
			}
	}
}
void promedios_ej3() {
	int* Vnotas;
	int j;
	int max = 0;
	int min;
	cout << "Ingrese total de notas a ingresar: "; cin >> j;
	Vnotas = new int[j];
	//mayor numero
	for (int i = 1; i <= j; i++) {
		cout << endl << "Ingrese nota" << i << ": "; cin >> Vnotas[i];
		if (Vnotas[i] > max)
			max = Vnotas[i];

	}
	//menor numero
	min = max;
	for (int i = 1; i <= j; i++) {
		if (min > Vnotas[i]) {
			min = Vnotas[i];
		}
	}
	//promedio sin contar el menor numero
	float prom = 0;
	for (int i = 1; i <= j; i++) {
		prom = prom + Vnotas[i];
	}
	prom = prom - min;
	cout << prom / (j - 1);
}
void frecuencia_ej4() {
	int* Vsalon = new int[40];
	for (int i = 1; i <= 40; i++) {
		cout << endl << "Ingrese nota" << i << ": "; cin >> Vsalon[i];
	}
}
int main() {
	aprobados_ej2();
	promedios_ej3();
}