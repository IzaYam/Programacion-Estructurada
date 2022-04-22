#pragma once
#include <iostream>
#include <time.h>
#include <conio.h>
#include <Windows.h>
using namespace std;
void generar_mensaje(char* mensaje, int longitud) {
	for (int i = 0; i < longitud; i++) {
		mensaje[i] = 'A' + rand() % ('Z' - 'A');
	}
}
void imprimir_mensaje(char* mensaje, int longitud) {
	for (int i = 0; i < longitud; i++) {
		cout << mensaje[i] << " ";
	}
}
bool existe_mensaje_consecutivo(char* mensaje, int longitud) {
	for (int i = 0; i < longitud; i++) {
		for (int j = i + 1; j < longitud; j++) {
			for (int k = j + 1; k < longitud; k++) {
				if (mensaje[i] == 'U' && mensaje[j] == 'P' && mensaje[k] == 'C')
					return true;
				else
					return false;
			}
		}
	}
}
bool existe_mensaje_alterno(char* mensaje, int longitud) {
	for (int i = 0; i < longitud; i++) {
		for (int j = i + 1; j < longitud; j++) {
			for (int k = j + 1; k < longitud; k++) {
				if (mensaje[i] == 'I' && mensaje[j] == 'S' && mensaje[k] == 'I')
					return true;
				else
					return false;
			}
		}
	}
}
int main() {
	srand(time(NULL));
	char* mensaje = new char[30];
	int longitud, conse, al;
	while (1) {
		cout << "Ingrese longitud del mensaje: "; cin >> longitud;
		generar_mensaje(mensaje, longitud);
		imprimir_mensaje(mensaje, longitud);
		existe_mensaje_consecutivo(mensaje, longitud);
		conse = existe_mensaje_consecutivo(mensaje, longitud);
		if (conse == true) cout << "\nES UN ALUMNO" << endl;
		existe_mensaje_alterno(mensaje, longitud);
		al = existe_mensaje_alterno(mensaje, longitud);
		if (al == true) cout << "\nES UN ALUMNO DE SISTEMAS" << endl;
		cout << "\nPresione una tecla para leer el siguiente mensaje..." << endl;
		_getch();
	}
	return 0;
}