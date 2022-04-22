#pragma once
#include <iostream>
#include <math.h>
using namespace std;
void menu() {
	cout << endl << "MENU DE OPCIONES" << endl;
	cout << "A. Calcular la serie" << endl;
	cout << "B. Grafico" << endl;
	cout << "C. FIN" << endl;
}
int terminos(int& n) {
	do {
		cout << "Ingrese el numero de terminos(n): "; cin >> n;
	} while (n <= 0 || n > 20);
	return n;
}
float calculo_serie(int& n) { // 4
	double suma = 3;
	int g = 9;
	int h = 2;
	for (int i = 1; i < n; i++) { // 1 2 3
		suma = suma + (pow(-1, i) * (g / h)); // 3 - 9/2 + 27/4 - 81/8
		g = g * 3; // 9*3=27*3=81
		h = h * 2; // 2*2=4*2=8
	}
	return suma;
}
int valor(int& v) {
	do {
		cout << "Ingrese numero: "; cin >> v;
	} while (v < 2 || v>9);
	return v;
}
void grafico(int& v) {
	int j;
	int temp = 10;
	for (int i = v; i > 0; i--) { //numero de filas
		for (int g = 1; g <= temp; g++) { // espacios
			cout << " ";
		}
		for (j = 1; j <= i; j++) { // 1 2 3 4 5
			cout << j << " ";
		}
		for (int k = j - 2; k > 0; k--) { // 4 3 2 1
			cout << k << " ";
		}
		cout << endl;
		temp = temp + 2;
	}
}
int main() {
	char opcion;
	int* N = new int;
	int* V = new int;
	while (1) {
		menu();
		cout << "Ingrese opcion: "; cin >> opcion;
		switch (opcion) {
		case 'A': case'a':
			cout << "CALCULAR LA SERIE" << endl;
			*N = terminos(*N);
			cout << "La suma es: " << calculo_serie(*N);
			break;
		case 'B': case 'b':
			cout << "GRAFICO" << endl;
			*V = valor(*V);
			grafico(*V);
			break;
		case 'C': case 'c':
			cout << "FIN" << endl;
			exit(0);
		default:
			break;
		}
	}
	delete N; delete V;
	*N = NULL, * V = NULL;
}