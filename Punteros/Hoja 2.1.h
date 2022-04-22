#pragma once
#include <iostream>
#include <conio.h>
using namespace std;
// MIO - completar
void menu() {
	cout << "   MENU PRINCIPAL   " << endl;
	cout << "1) Determinar el factorial de un numero" << endl;
	cout << "2) Calcular el valor de e^a" << endl;
	cout << "3) Imprimeir rombo" << endl;
	cout << "4) Fin" << endl;
	cout << "Ingrese su opcion: ";
}
int positivo() {
	int posi;
	do {
		cout << "Ingrese el numero positivo: "; cin >> posi;
	} while (posi <= 0);
	return posi;
}
int valida_k() {
	int k;
	do {
		cout << "Ingrese k: "; cin >> k;
	} while (k <= 0 || k > 20);
	return k;
}
int valida_num() {
	int num;
	do {
		cout << "Ingrese numero positivo: "; cin >> num;
	} while (num <= 0 || num > 10);
	return num;
}
int funcionfactorial() {
	int fact = 1;
	int i = 1;
	int* N = new int;
	*N = positivo();
	for (int i = 1; i <= *N; i++) {
		fact = fact * i;
	}
	cout << "Factorial de " << *N;
	return fact;
}double funcion_expo() {
	int fact = 1;
	int k = valida_k();
	int a;
	cout << "Ingrese el valor de a: "; cin; a;
	int suma = 1;
	for (int i = 1; i <= k; i++) {
		fact = fact * i;
	}
	for (int i = 1; i <= k; k++) {
		suma = suma + (pow(a, k) / fact);
	}
	cout << suma;
	return suma;
}
int main() {
	int* opcion = new int;
	int* N = new int;
	while (1) { // while(true) es decir mientras sea verdadero se hara 
		menu();
		cin >> *opcion;
		switch (*opcion) {
		case 1:
			cout << endl << "FUNCION FACTORIAL" << endl;
			cout << " es " << funcionfactorial() << endl;
			break;
		case 2:
			cout << endl << "Funcion e^a " << endl;
			cout << funcion_expo();
			break;
		case 3:
			cout << "Imprimir rombo" << endl;
			break;
		case 4:
			cout << "Finalizaste el programa" << endl;
			break;
		default:
			break;
		}
	}
	_getch();
}
// codigo de la miss
#include<iostream>
#include<conio.h>
#include <iomanip>
using namespace std;
using namespace System;
void menu() {
	cout << endl; cout << endl;
	cout << "MENU PRINCIPAL" << endl;
	cout << "1. Determinar el factorial de un numero" << endl;
	cout << "2. Calcular e^a" << endl;
	cout << "3. Imprimir Rombo" << endl;
	cout << "4. Fin" << endl;
	cout << "Ingrese su opcion:";
}
int IngresaPositivo() {
	int posi;
	do {
		cout << "Ingerese Numero Positivo:"; cin >> posi;
	} while (posi <= 0);
	return posi;
}
int ValidaK() {
	int k;
	do {
		cout << "Ingerese k:"; cin >> k;
	} while (k <= 0 || k > 20);
	return k;
}
int ValidaNum() {
	int num;
	do {
		cout << "Ingerese Numero Positivo:"; cin >> num;
	} while (num <= 0 || num > 10);
	return num;
}
int FuncionFactorial(int* N) {
	int fact = 1;
	int i = 1;
	while (i <= *N) {
		fact = fact * i;//1*1=1*2=2*3=6*4=24
		i++;//1+1=2+1=3+1=4
	}
	return fact;
}
int FuncionExponencial(int& b, int& e) {
	int expo = 1;
	int i = 1;
	while (i <= e) {
		expo = expo * b;
		i++;
	}
	return expo;
}
double SumaSerie() {
	double exp = 0;
	int a, k;
	cout << "Ingrese el valor de a: "; cin >> a;
	k = ValidaK();
	for (int i = 0; i < k; i++) {
		exp = exp + FuncionExponencial(a, i) / FuncionFactorial(&i);
	}
	return exp;
}
void rombo() {
	int n;
	cout << "Ingrese n: ";
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cout << setfill(' ') << setw(((n + 1) - i) * 2);
		for (int j = 1; j <= i; j++) {
			cout << j << " ";
		}
		for (int j = (i - 1); j >= 1; j--) {
			cout << j << " ";
		}
		cout << endl;
	}
	for (int i = (n - 1); i >= 1; i--) {
		cout << setfill(' ') << setw(((n + 1) - i) * 2);
		for (int j = 1; j <= i; j++) {
			cout << j << " ";
		}
		for (int j = (i - 1); j >= 1; j--) {
			cout << j << " ";
		}
		cout << endl;
	}
}


void DibujaRombo()
{
	int* N;
	N = new int;
	*N = ValidaNum();
	int x = 40 - (*N) / 2;
	int y = 1;

	for (int i = 1; i <= *N; i++)
	{
		Console::SetCursorPosition(x, y);
		for (int j = 1; j <= *N - i; j++)
			cout << " ";
		for (int j = 1; j < i * 2; j++)
			cout << j;
		cout << endl;
		y++;
	}
	for (int i = 1; i <= *N - 1; i++)
	{
		Console::SetCursorPosition(x, y);
		for (int j = 1; j <= i; j++)
			cout << " ";
		for (int j = 1; j < ((*N) * 2) - (i * 2); j++)
			cout << j;
		cout << endl;
		y++;
	}
	delete N;
}
int main() {
	int* opcion = new int;
	int* N = new int;
	while (1) {//while (true)
		menu();
		cin >> *opcion;
		switch (*opcion)
		{
		case 1:
			cout << endl << "FUNCION FACTORIAL" << endl;
			*N = IngresaPositivo();
			cout << "Factoial de " << *N << " es: " << FuncionFactorial(N);
			break;
		case 2:
			cout << endl << "FUNCION e^a " << endl;
			cout << "La funciom exponencial es: " << SumaSerie();
			break;
		case 3:
			DibujaRombo();
			break;
		case 4:
			cout << "Finalizaste el programa" << endl;
			_getch();
			exit(0);
			break;
		default:
			break;
		}
	}


	delete opcion;
	delete N;
	_getch();
}