#pragma once
#include<iostream>
#include<conio.h>
#include<time.h>
using namespace std;

void generarDatos(int* v1) {
	for (int i = 0; i < 40; i++) {
		v1[i] = rand() % 101;

	}
}
void MostrarDatos(int* v1) {
	for (int i = 0; i < 40; i++) {
		cout << "Puntaje alumno " << i + 1 << " :";
		cout << v1[i] << endl;
	}
}
void Lista_DebajodelPromedio(int* Vpuntajes) {
	int suma = 0;
	int c = 0;
	for (int i = 0; i < 40; i++) {
		//hallamdo la suma de todos los puntajes
		suma = suma + Vpuntajes[i];
	}
	//hallo el promedio
	float promedio = suma / 40;
	cout << " El promedio es: " << promedio << endl;
	for (int i = 0; i < 40; i++) {
		// determino si el puntaje es menor que el promedio
		if (Vpuntajes[i] < promedio) {
			c++;
			cout << Vpuntajes[i] << endl;
		}
	}
	cout << " La cantidad de alumnos que obtuvieron puntaje menor al promedio es: " << c;
}

int main() {
	srand(time(NULL));

	int* VPuntajes = new int[40];
	cout << "Generando datos" << endl;
	generarDatos(VPuntajes);
	MostrarDatos(VPuntajes);
	Lista_DebajodelPromedio(VPuntajes);

	_getch();
}