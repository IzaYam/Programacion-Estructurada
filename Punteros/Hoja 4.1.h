#pragma once
#include<iostream>
#include<conio.h>
using namespace std;
void menu() {
	cout << endl; cout << endl;
	cout << "MENU PRINCIPAL" << endl;
	cout << "1. Suma de la serie " << endl;
	cout << "2. Fibonacci" << endl;
	cout << "3. Grafico" << endl;
	cout << "4. Fin" << endl;
}
int IngresaNUM() {
	int Num;
	do {
		cout << "Ingrese num: "; cin >> Num;
	} while (Num <= 0 || Num >= 30); return Num;
}
int IngresaX() {
	int x;
	do {
		cout << "Ingrese X: "; cin >> x;
	} while (x < 1 || x >4); return x;
}
float factorial(int& N) {
	int fact = 1;
	int i = 1;
	while (i <= N) {
		fact = fact * i;
		i++;
	}
	return fact;
}
float exponencial(float& b, int& e) {
	float expo = 1;
	for (int i = 1; i <= e; i++)
		expo = expo * b;
	return expo;
}
double Serie(int* n, float* x) {
	float suma = *x;
	float signo = -1;
	for (int i = 1; i < *n; i++) {
		int a = 2 * i;
		suma = suma + signo * exponencial(*x, a) / factorial(a);
		signo *= -1;
	}
	return suma;
}
int IngresaNUMERO() {
	int Num;
	do {
		cout << "Ingrese num: "; cin >> Num;
	} while (Num < 0); return Num;
}
int Fibonacci(int* N) { // 4
	int t1 = 0, t2 = 1, nexTerm = 0;
	int fib = 0;
	for (int i = 1; i <= *N; i++) {
		//	i=1		1<=4		1+1=2
		//			2<=4		2+1=3
		//			3<=4		3+1=4
		//			4<=4
		if (i == 2) {
			//1==2  F
			//2==2  V
			//3==2  F
			fib = t2;
			//fib=1
			continue;
		}
		nexTerm = t1 + t2;
		//			0+1=1
		//			1+1=2
		//			1+2=3
		t1 = t2;
		//	t1=1
		//	t1=1
		//	t1=2
		t2 = nexTerm;
		//t2=1
		//t2=2
		//t2=3
		fib = nexTerm;
		//fib=1
		//fib=2
		//fib=3
	}
	return fib;//1 1 2  3
}
int IngresaFilas() {
	int x;
	do {
		cout << "Ingrese Filas: "; cin >> x;
	} while (x < 1 || x >10); return x;
}
void dibujaTriangulo(int* nfilas) { // 3
	int x = 40 - (*nfilas) / 2;
	int y = 10;
	for (int i = 1; i <= *nfilas; i++) {
		//			1<=3			1+1=2
		//			2<=3			2+1=3
		//			3<=3
		//imprimir los espcios para formar el triangulo
		for (int k = 1; k <= *nfilas - i; k++)
			//			1<=2
			//			1<=1
			//			1<
			cout << " ";
		for (int j = 1; j < i * 2; j = j + 2)
			//			1<1*2
			//			1<2*2		1+2=3
			//			3<4
			cout << j << " ";
		cout << endl;
	}
}
int main() {
	int opcion;//variable estatica
	//declaro y reservo espacio en memoria
	int* n = new int;
	float* x = new float;
	while (1) {
		menu();
		cout << "Ingrese la opcion: "; cin >> opcion;
		switch (opcion)
		{
		case 1:
			cout << endl << "SERIE" << endl;
			*n = IngresaNUM();//llamo a la funcion que lee y valida numero de terminos
			*x = IngresaX();//llamo a la funcion que lle y valida x
			cout << "La suma de la serie es: " << Serie(n, x) << endl;
			break;
		case 2:
			cout << endl << "Fibonacci" << endl;
			*n = IngresaNUMERO();
			cout << "Bibonacci: " << Fibonacci(n) << endl;
			break;
		case 3:
			cout << endl << "GRAFICAR" << endl;
			*n = IngresaFilas();
			dibujaTriangulo(n);
			break;
		case 4:
			cout << "FIN";
			_getch();
			exit(0);
		default:
			cout << endl << "Ingrese la opcion correcta";
			menu();
			break;
		}

	}
	delete n; delete x;
	x = NULL, n = NULL;
}