#pragma once
#include <iostream>
#include <conio.h>
using namespace std;
int main() {
	int años, puntos;
	char estudios;
	cout << "Años laborando: "; cin >> años;
	cout << "Estudios realizados: "; cin >> estudios;
	toupper(años);
	puntos = (años < 5) * 5 + (((estudios == 'P') * 5) || ((estudios == 'S') * 10) || ((estudios == 'U') * 20) || ((estudios == 'G') * 30));
	puntos = (años >= 5) * 10 + (((estudios == 'P') * 5) || ((estudios == 'S') * 10) || ((estudios == 'U') * 20) || ((estudios == 'G') * 30));
	cout << "el puntaje obtenido es: " << puntos;
}