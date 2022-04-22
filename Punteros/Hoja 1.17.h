#pragma once
#include <iostream>
using namespace std;
void mayor(int n1, int n2) {
	if (n1 > n2)
		cout << "El mayor es el primer numero: " << n1 << endl;
	else
		cout << "El mayor es el segundo numero: " << n2 << endl;
}
void menor(int n1, int n2) {
	if (n1 < n2)
		cout << "El menor es el primer numero: " << n1 << endl;
	else
		cout << "El menor es el segundo numero: " << n2 << endl;
}
int main() {
	int n1, n2;
	cout << "Ingrese el primer numero: "; cin >> n1;
	cout << "Ingrese el segundo numero: "; cin >> n2;
	mayor(n1, n2);
	menor(n1, n2);
}