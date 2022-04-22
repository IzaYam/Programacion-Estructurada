#pragma once
#include <iostream>
using namespace std;
int divisibilidad(int n1, int n2) {
	if (n1 % n2 == 0)
		cout << "Son divisibles" << endl;
	if (n1 % n2 != 0)
		cout << "No son divisibles" << endl;
	int n3, i = 2;
	cout << "Ingrese el numero cuyos divisores quiere hallar: "; cin >> n3;
	cout << "divisores: " << endl;
	while (i % n3 == 0) {
		cout << i << "; ";
		i++;
	}
}
int main() {
	int n1, n2;
	cout << "Ingrese el primer numero: "; cin >> n1;
	cout << "Ingrese el segundo numero: "; cin >> n2;
	divisibilidad(n1, n2);
}