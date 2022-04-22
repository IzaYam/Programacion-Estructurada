#pragma once
#include<iostream>
#include<conio.h>
#include<time.h>
using namespace std;
int validaElementos() {
	int n;
	do {
		cout << "Ingrese la cantidad de elementos del arreglo: "; cin >> n;
	} while (n < 0); return n;
}
void LeerDatos(int* n, int* v1) {
	//para leer los elementos del arreglo
	for (int i = 0; i < *n; i++) {
		cout << "Ingrese elemento " << i + 1 << " :";
		cin >> v1[i];
	}
}
void generarDatos(int* n, int* v1) {
	for (int i = 0; i < *n; i++) {
		v1[i] = 1 + rand() % (51 - 1);
	}
}
void MostrarDatos(int* n, int* v1) {
	for (int i = 0; i < *n; i++) {
		cout << "elemento " << i + 1 << " :";
		cout << v1[i] << endl;
	}
}
void OrdenarAscendente(int* n, int* v1) {
	//accer a los elementos del arreglo utilizaola estructura repetitiva
	int aux;//variable temporal que ayuda a almacenar los datos 
	for (int i = 0; i < *n; i++) {
		for (int j = i + 1; j < *n; j++) {
			if (v1[i] > v1[j]) {
				aux = v1[i];
				v1[i] = v1[j];
				v1[j] = aux;
			}
		}
	}
}
int main() {
	srand(time(NULL));
	int* n = new int;
	*n = validaElementos();//llamamos a la funcion que lle y valida numero d elementos
	int* v1 = new int[*n];
	/*LeerDatos(n,v1);
	MostrarDatos(n, v1);*/
	cout << "Generando datos" << endl;
	generarDatos(n, v1);
	MostrarDatos(n, v1);
	OrdenarAscendente(n, v1);
	cout << " Los datos ordenado son: " << endl;
	MostrarDatos(n, v1);
	_getch();
}