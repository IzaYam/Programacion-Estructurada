#pragma once
#include<iostream>
#include<conio.h>
using namespace std;
void generarDatos(int n, float** tabla) {
	Random r; //numero aleatorio cambiar por la otra forma aleatoria
	for (int i = 0; i < n; i++) {
		tabla[i][0] = i + 1;//# de llamada
		tabla[i][1] = r.Next(1, 4);//oficina 1,2,3
		tabla[i][2] = r.Next(1, 31);//cantidad de minutos
		tabla[i][3] = r.Next(1, 4);//tipo de llamada
		if (tabla[i][3] == 1)//llamanda local
			tabla[i][4] = tabla[i][2] * 0.30;
		if (tabla[i][3] == 2)//llamanda celular
			tabla[i][4] = tabla[i][2] * 0.80;
		if (tabla[i][3] == 3)//llamanda internacional
			tabla[i][4] = tabla[i][2] * 1.50;
	}
}
void promedio(int& n, float** tabla) {
	int local = 0, inter = 0, cel = 0;
	int l = 0, i = 0, c = 0;
	for (int i = 0; i < n; i++) {
		if (tabla[i][1] == 2) {
			if (tabla[i][3] == 1) {
				local = local + tabla[i][2];
				l++;
			}
			if (tabla[i][3] == 2) {
				cel = cel + tabla[i][2];
				c++;
			}
			if (tabla[i][3] == 3) {
				inter = inter + tabla[i][2];
				i++;
			}
		}
	}
	cout << "Promedio para local: " << local / l << endl; //corregir
	cout << "Promedio para celular: " << cel / c << endl;
	cout << "Promedio para internacional: " << inter / i << endl;
}
void MayorLLamada(int& n, float** tabla) {
	float Mayor1 = 0, Mayor2 = 0, Mayor3 = 0;
	for (int i = 0; i < n; i++) {
		if (tabla[i][1] == 1)
			Mayor1 += tabla[i][2];
		if (tabla[i][1] == 2)
			Mayor2 += tabla[i][2];
		if (tabla[i][1] == 3)
			Mayor3 += tabla[i][2];
	}
	if (Mayor1 > Mayor2 && Mayor1 > Mayor3)
		cout << " La oficina que tuvo mayor cantidad de llamadas es Logística con: " << Mayor1 << " cantidad de minutos" << endl;
	if (Mayor2 > Mayor1 && Mayor2 > Mayor3)
		cout << " La oficina que tuvo mayor cantidad de llamadas es Recursos humanos con: " << Mayor2 << " cantidad de minutos" << endl;
	if (Mayor3 > Mayor2 && Mayor3 > Mayor1)
		cout << " La oficina que tuvo mayor cantidad de llamadas es Ventas con: " << Mayor3 << " cantidad de minutos" << endl;

}
void MostrarDatos(int& n, float** tabla) {
	cout << endl << "LOS DATOS GENERADOS SON: " << endl;
	cout << "Id\tOfic.\tCan\tTipo\tcosto" << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 5; j++) {
			cout << tabla[i][j] << "\t";
		}
		cout << endl;
	}
}
int main() {
	int n = 10;
	float** tabla = new float* [n];
	for (int i = 0; i < n; i++)
		tabla[i] = new float[5];

	generarDatos(n, tabla);
	MostrarDatos(n, tabla);
	MayorLLamada(n, tabla);
	promedio(n, tabla);
	_getch();
}
