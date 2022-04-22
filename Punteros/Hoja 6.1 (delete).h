#pragma once
#include <iostream>
using namespace std;
void menu() {
	cout << endl << "MENU DE OPCIONES" << endl;
	cout << "A. Calcular la serie" << endl;
	cout << "B. Primos" << endl;
	cout << "C. Grafico" << endl;
	cout << "D. FIN" << endl;
}
int terminos() {
	int n;
	do {
		cout << "Ingrese el numero de terminos: "; cin >> n;
	} while (n <= 0 || n > 25);
	return n;
}
float valida_y() {
	float y;
	do {
		cout << "Ingrese el valor de y: "; cin >> y;
	} while (y <= 1 || y >= 5.5);
	return y;
}
int factorial(int& i) {
	i = (i - 1) * 2;
	int fact = 1;
	for (int j = 1; i <= i; j++) {
		fact = fact * j;
	}
	return fact;
}
float calcular_serie(int& n, int& y) {
	float suma = -1;
	for (int i = 2; i <= n; i++) {
		if (i % 2 == 0)
			suma = suma + (((pow(i, 2) - 1) * pow(y, 2 * i - 1))) / factorial(i);
		if (i % 2 != 0)
			suma = suma - ((2 * i - 1) * pow(y, (i - 1) * 2)) / factorial(i);
	}
	return suma;
}
int valida_num() {
	int num;
	do {
		cout << "Ingrese numero: "; cin >> num;
	} while (num <= 0);
	return num;
}
void primo(int& p) {
	int cd = 0;
	for (int i = 1; i <= p; i++) {
		for (int j = 1; j <= i; j++) {
			if (i % j == 0) {
				cd++;
			}
		}
		if (cd == 2) {
			cout << i << " ";
			cd = 0;
		}
		else
			cd = 0;
	}
}
int valido() {
	int gra;
	do {
		cout << "Ingrese un numero: "; cin >> gra;
	} while (gra < 2 || gra>9);
	return gra;
}
void graficar(int& gra) {
	int temp = 30;
	int g = gra;
	for (int i = 1; i <= gra; i++) {
		for (int k = 1; k <= temp; k++) {
			cout << " ";
		}
		for (int j = 1; j <= i; j++) {
			cout << g << " ";
		}
		cout << endl;
		g--;
		temp = temp - 2;
	}
}
int main() {
	int* N = new int;
	int* Y = new int;
	int* PRI = new int;
	int* GRA = new int;
	char opcion;
	while (1) {
		menu();
		cout << "Ingrese opcion: "; cin >> opcion;
		switch (opcion) {
		case 'A': case 'a':
			cout << "CALCULAR SERIE" << endl;
			*N = terminos();
			*Y = valida_y();
			cout << "Calculo = ";
			cout << calcular_serie(*N, *Y);
			break;
		case 'B': case 'b':
			cout << "PRIMOS" << endl;
			*PRI = valida_num();
			primo(*PRI);
			break;
		case 'C': case 'c':
			cout << "GRAFICO" << endl;
			*GRA = valido();
			graficar(*GRA);
			break;
		case 'D': case 'd':
			cout << "FIN" << endl;
			exit(0);
		default:
			break;
		}
	}
	delete N; delete Y; delete PRI; delete GRA;
	*N = NULL, * Y = NULL, * PRI = NULL, * GRA = NULL;
}