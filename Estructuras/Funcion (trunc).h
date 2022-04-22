#pragma once
#include <iostream>
#include <conio.h>
using namespace std;
int main() {
	long long codigo;
	int dd, mm, aaaa, tt, pp, perecible;
	char cod;
	cout << "ingrese el codigo de 12 digitos\n"; cin >> codigo;
	dd = trunc(codigo / 10000000000);
	mm = trunc((codigo % 10000000000) / 100000000);
	aaaa = trunc(((codigo % 10000000000) % 100000000) / 10000);
	tt = trunc((((codigo % 10000000000) % 100000000) % 10000) / 100);
	pp = trunc((((codigo % 10000000000) % 100000000) % 10000) % 100);
	cod = tt;
	perecible = (pp > 0) * 0 + (pp < 0) * 1;
	cout << "dia de vencimiento: "; cin >> dd;
	cout << "mes de vencimiento: "; cin >> mm;
	cout << "anio de vencimiento: "; cin >> aaaa;
	cout << "codigo producto de vencimiento: "; cin >> cod;
	cout << "perecible o no: "; cin >> perecible;
	_getch();
}