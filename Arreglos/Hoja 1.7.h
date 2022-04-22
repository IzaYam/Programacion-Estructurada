#pragma once
#include <iostream>
#include <conio.h>
#include <time.h>
using namespace std;
void almacenaMuestra(int* n, long long* num, long long* Vector) {
	long long temporal;
	Vector[0] = *num % 10;//789543789543/10=3
	temporal = *num / 10;//789543789543/10=78954378954
	for (int i = 1; i <= *n; i++) {
		//			1<=12	1+1=2
		//			2<=12	2+1=3
		//			3<=12	3+1=4
		//			4<=12
		Vector[i] = temporal % 10;
		//	v[1]=4
		//	v[2]=5
		//	v[3]=9
		//	v[4]=8
		temporal = temporal / 10;
		//		78954378954/10=7895437895
		//		7895437895/10=789543789
		//		789543789/10=78954378
		//		78954378/10=7895437
		//...
	}
	//mostramos el vector hacia atrás puesto que las
	//unidades ocupan la primera posiicón del arreglo
	for (int i = *n - 1; i >= 0; i--) {
		cout << Vector[i];
	}
}

int main() {
	srand(time(NULL));
	long long* numero = new long long;
	int* n = new int;

	//pedir cantidad de elementos del vector
	cout << "Ingrese cantidad de elementos: "; cin >> *n;//12

	//pedir el numero grande
	cout << "Ingrese el número: "; cin >> *numero;
	long long* V1 = new long long[*n];
	almacenaMuestra(n, numero, V1);

	_getch();
}