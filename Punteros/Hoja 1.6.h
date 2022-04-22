#pragma once
#include <iostream>
#include <math.h>
using namespace std;
int main() {
	int x1, x2, y1, y2;
	float* dis = new float;
	float* ang = new float;

	cout << "Ingrese x1\n";
	cin >> x1;
	cout << "Ingrese x2\n";
	cin >> x2;
	cout << "Ingrese y1\n";
	cin >> y1;
	cout << "Ingrese y2\n";
	cin >> y2;

	*dis = sqrt((pow((x2 - x1), 2)) + (pow((y2 - y1), 2)));
	*ang = atan((y1 - y2) / (x1 - x2));

	cout << "La distancia es: " << *dis;
	cout << "El angulo es: " << *ang;
}