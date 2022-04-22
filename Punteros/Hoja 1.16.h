#pragma once
#include <iostream>
using namespace std;
double serie(int n) {
	double total = 0;
	int fact = 1;
	for (int i = 1; i <= n; i++) {
		fact = fact * i;
	}
	for (int j = 1; j <= n; j++) {
		if (n == 1)
			total = total + (3, 1) / fact;
		if (n > 1)
			total = total + (3, 1) / fact + ((n * 2) + 1, n) / fact;
	}
	return total;
}
int main() {
	int n;
	cout << "Ingrese el valor n: "; cin >> n;
	cout << "La suma de la serie es: " << serie(n);
}