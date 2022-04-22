#pragma once
#include <iostream>
using namespace std;
int valida(int* n) {
	do {
		cout << "Ingrese el valor de n: "; cin >> *n;
	} while (*n <= 1);
	return *n;
}
void graficar(int* n) {
	for (int i = 0; i < *n; i++) {
		for (int j = 0; j < *n; j++) {
			cout << "* ";
		}
		cout << endl;
	}
}
int main() {
	int* n = new int;
	*n = valida(n);
	//*n = 3;
	graficar(n);
}