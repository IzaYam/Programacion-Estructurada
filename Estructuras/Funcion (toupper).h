#pragma once
#include <iostream>
#include <conio.h>
using namespace std;
int main() {
	int a�os, puntos;
	char estudios;
	cout << "A�os laborando: "; cin >> a�os;
	cout << "Estudios realizados: "; cin >> estudios;
	toupper(a�os);
	puntos = (a�os < 5) * 5 + (((estudios == 'P') * 5) || ((estudios == 'S') * 10) || ((estudios == 'U') * 20) || ((estudios == 'G') * 30));
	puntos = (a�os >= 5) * 10 + (((estudios == 'P') * 5) || ((estudios == 'S') * 10) || ((estudios == 'U') * 20) || ((estudios == 'G') * 30));
	cout << "el puntaje obtenido es: " << puntos;
}