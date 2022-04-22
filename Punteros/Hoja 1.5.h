#pragma once
#include <iostream>
using namespace std;
int main() {
	int* x = new int;
	int* y = new int;
	bool* circulo = new bool;

	cout << "Ingrese x\n";
	cin >> *x;
	cout << "Ingrese y\n";
	cin >> *y;

	*circulo = ((*x >= -5 && *x <= 5) && (*y >= -5 && *y <= 5)) * (true) + ((*x <= -6 || *x >= 6) || (*y >= 6 || *y <= -6)) * (false);

	cout << "Pertenece al circulo? " << *circulo;
}