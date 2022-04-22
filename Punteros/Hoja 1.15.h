#pragma once
#include<iostream>
#include<conio.h>
using namespace std;
int factorial(int I) {
	int fact = 1;
	int i = 1;
	while (i <= I) {
		fact = fact * i;
		i++;
	}
	return fact;
}
void combinatorio(int& n, int* k) {
	double resultado;
	resultado = factorial(n) / (factorial(*k) * factorial(n - *k));
	cout << "El combinatorio  es: " << resultado;

}
int main() {
	int n, k;
	cout << "Ingrese n: "; cin >> n;
	cout << "Ingrese K: "; cin >> k;
	combinatorio(n, &k);

	getch();

}