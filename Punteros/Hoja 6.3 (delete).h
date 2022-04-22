#pragma once
//#include "pch.h"
#include <iostream>
//#include <bits/stdc++.h>
#include<time.h>
//using namespace System;
using namespace std;
void Generar_y_MostrarDatos(int* v1) {
	cout << "Calificación dada de los 30 docentes al taller brindado: ";
	for (int i = 0; i < 30; i++) {
		v1[i] = 1 + rand() % (5 - 1);
		cout << v1[i] << " ";
	}
}
void Lista_puntajes(int* v1) {
	int c1 = 0, c2 = 0, c3 = 0, c4 = 0;
	for (int i = 0; i < 30; i++) {
		if (v1[i] == 1) c1++;
		if (v1[i] == 2) c2++;
		if (v1[i] == 3) c3++;
		if (v1[i] == 4) c4++;
	}
	cout << "\nCantidad de docentes que puntuaron 1: " << c1;
	cout << "\nCantidad de docentes que puntuaron 2: " << c2;
	cout << "\nCantidad de docentes que puntuaron 3: " << c3;
	cout << "\nCantidad de docentes que puntuaron 4: " << c4;
	cout << "\n";
	int mayor;
	if (c1 > c2 && c1 > c3 && c1 > c4) cout << "Puntaje con mayor votación: 1";
	if (c2 > c1 && c2 > c3 && c2 > c4) cout << "Puntaje con mayor votación: 2";
	if (c3 > c1 && c3 > c2 && c3 > c4) cout << "Puntaje con mayor votación: 3";
	if (c4 > c1 && c4 > c2 && c4 > c3) cout << "Puntaje con mayor votación: 4";
}
int main() {
	setlocale(LC_ALL, "");
	srand(time(NULL));
	int* v1 = new int[30];
	Generar_y_MostrarDatos(v1);
	Lista_puntajes(v1);
	delete[]v1;
	return 0;
}