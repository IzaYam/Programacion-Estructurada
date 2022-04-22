#pragma once
#include <iostream>
#include <conio.h>
using namespace std;
void menu() {
	cout << endl << "MENU DE OPCIONES";
	cout << endl << "1. Calcular la serie" << endl;
	cout << "2. Grafico" << endl;
	cout << "3. FIN" << endl;
}
int terminos() {
	int* N = new int;
	do {
		cout << "Ingrese el numero de terminos: "; cin >> *N;
	} while (*N <= 0 || *N > 21);
	return *N;
}
float valor_a() {
	float* A = new float;
	do {
		cout << "Ingrese el valor de a: "; cin >> *A;
	} while (*A < 0.5 || *A>2);
	return *A;
}
void serie(int& N, float& A) {
	double suma = 0;
	for (int i = 1; i <= N; i++) {
		if (i % 2 != 0)
			suma = suma + ((i * 2 - 1) * pow(A, pow(2, i - 1)) / double(i * 2));
		if (i % 2 == 0)
			suma = suma - ((i * 2 - 1) * pow(A, pow(2, i - 1)) / double(i * 2));
	}
	cout << suma;
}
int valida_filas() {
	int n;
	do {
		cout << "ingrese n: "; cin >> n;
	} while (n <= 0 || n > 9);
	return n;
}
void grafica(int n) {
	int temp = 30;
	int aux;
	for (int i = 1; i <= n; i++) {
		aux = 0;
		for (int k = 1; k <= temp; k++) {
			cout << " ";
		}
		for (int j = 1; j < i * 2; j++) {
			if (j > i) {
				aux = aux + 2;
				cout << j - aux;
			}
			else
				cout << j;
		}

		temp--;
		cout << endl;
	}
}
int main() {
	int* N = new int;
	float* A = new float;
	int opcion, filas;
	while (1) {
		menu();
		cout << "Ingrese opcion: "; cin >> opcion;
		switch (opcion) {
		case 1:
			cout << "SERIE" << endl;
			*N = terminos();
			*A = valor_a();
			cout << "El calculo de la serie es: ";
			serie(*N, *A);
			break;
		case 2:
			cout << "GRAFICO" << endl;
			filas = valida_filas();
			grafica(filas);
			cout << endl;
			break;
		case 3:
			cout << "FIN";
			exit(0);
		default:
			break;
		}
	}
	delete N; delete A;
	*N = NULL, * A = NULL;
}