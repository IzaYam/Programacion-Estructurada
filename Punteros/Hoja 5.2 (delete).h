#pragma once
#include <iostream>
using namespace std;
void menu() {
	cout << endl << "MENU DE OPCIONES" << endl;
	cout << "4. Calcular pi" << endl;
	cout << "5. Grafico" << endl;
	cout << "6. FIN" << endl;
}
int terminos() {
	int n;
	do {
		cout << "Ingrese numero de terminos(n): "; cin >> n;
	} while (n <= 0);
	return n;
}
void calcularPI(int& n) {
	double multi = 4;
	for (int i = 2; i <= n; i++) {
		if (i % 2 == 0)
			multi = multi * i / (i + 1);
		if (i % 2 != 0)
			multi = multi * (i + 1) / i;
	}
	cout << multi;
}
int valor() {
	int v;
	do {
		cout << "Ingrese un numero: "; cin >> v;
	} while (v < 2 || v > 9);
	return v;
}
void grafico(int& v) {
	int temp = 30;
	int aux;
	for (int i = 1; i <= v * 2; i++) { //recorrido para las filas
		for (int k = 1; k <= temp; k++) //para centrar
			cout << " ";
		for (int j = 1; j < v * 2; j++) { // recorrido de las columnas

			if (j <= v && (j <= i && j + i <= v * 2))
				cout << v + 1 - j;
			else
				if (j > v && (j >= i && i + j >= v * 2))
					cout << j + 1 - v;
				else
					cout << " ";
		}
		cout << endl;
	}
}
int main() {
	int* N = new int;
	int* V = new int;
	int opcion;
	while (1) {
		menu();
		cout << "Ingrese opcion: "; cin >> opcion;
		switch (opcion) {
		case 4:
			cout << "CALCULAR PI" << endl;
			*N = terminos();
			cout << "PI es: "; calcularPI(*N);
			cout << endl;
			break;
		case 5:
			cout << "GRAFICO" << endl;
			*V = valor();
			grafico(*V);
			break;
		case 6:
			cout << "FIN" << endl;
			exit(0);
		default:
			break;
		}
	}
	delete N; delete V;
	*N = NULL, * V = NULL;
}