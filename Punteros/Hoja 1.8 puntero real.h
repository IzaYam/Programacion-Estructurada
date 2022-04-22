#pragma once
#include<iostream>
#include<conio.h>
using namespace std;
bool Esbisiesto(int* anio) {//2016
	if (*anio % 4 == 0 && (*anio % 100 != 0 || *anio % 400 == 0))
		return true;
	else
		return false;
}


int main() {
	int* anio = new int;
	cout << "Ingrese el anio: "; cin >> *anio;//2016
	if (Esbisiesto(anio) == true)
		cout << "Es bisiesto";
	else
		cout << "No es bisiesto";

	getch();

}
//EJERCICIO 9
//bool FechaEsValida(int dia, int mes, int annio) {
	//if (dia == 31) {
		//if (mes % 2 != 0 && mes != 1 || mes==12)
			//if (annio )
	//}

//}