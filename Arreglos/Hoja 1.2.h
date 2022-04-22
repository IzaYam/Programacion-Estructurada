#pragma once
#include <iostream>
using namespace std;
void gym() {
	int* pesos = new int[11];
	int aux = 0, delgada = 0, mediana = 0, gruesa = 0;
	float total = 0;
	for (int i = 1; i <= 10; i++) {
		cout << "Ingrese peso " << i << " : "; cin >> pesos[i];
		total = total + pesos[i];
		if (pesos[i] > aux)
			aux = pesos[i];
		if (pesos[i] <= 53)
			delgada++;
		if (pesos[i] > 53 && pesos[i] < 60)
			mediana++;
		if (pesos[i] >= 60)
			gruesa++;
	}
	cout << "El peso promedio es: " << total / 10 << endl;
	cout << "El peso de la persona que pesa mas es: " << aux << endl;
	cout << "Numero de personas con contextura delgada: " << delgada << endl;
	cout << "Numero de personas con contextura mediana: " << mediana << endl;
	cout << "El numero de personas con contextura gruesa: " << gruesa << endl;
}
int main() {
	int* pesos = new int[10];
	gym();
}