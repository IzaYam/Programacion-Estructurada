#pragma once
#include <iostream>
#include <time.h>
using namespace std;
struct alumnos {
	int* gripe = new int[20];
	int* tos = new int[20];
};
void GeneraryListar(int& n, alumnos VDatosalumnos) {
	int aux1, aux2;
	for (int i = 0; i < n; i++) {
		VDatosalumnos.gripe[i] = 1 + rand() % (3 - 1);
		VDatosalumnos.tos[i] = 1 + rand() % (3 - 1);
	}
}
int main() {
	srand(time(NULL));
	int n;
	do
	{
		cout << "Numero de alumnos: "; cin >> n;
	} while (n < 1 || n>20);
	alumnos VDatosalumnos;
	return 0;
}