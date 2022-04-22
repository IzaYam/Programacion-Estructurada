#include <iostream>
#include <stdio.h>
#include <Windows.h>
using namespace std;
void figuras() {
	//triangulo
	for (int i = 0; i < 7; i++) { //filas triangulo y sol
		for (int k = 0; k < 40 - i * 2; k++) { //espacios triangulo
			cout << " ";
		}
		for (int j = 0; j < i * 2 + 1; j++) { //columnas triangulo
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
			cout << "# ";
		}
		//sol
		for (int s = 0; s < 58 - i * 4; s++) {
			cout << " ";
		}
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
		if (i == 1)
			cout << "    ########";
		if (i == 2)
			cout << "     ##########";
		if (i == 3)
			cout << "       ##########";
		if (i == 4)
			cout << "          ########";
		cout << endl;
	}
	//cuadrado
	for (int i = 0; i < 1; i++) { //1ra fila
		for (int i = 0; i < 9; i++) { // primera fila del primer arbol
			cout << " ";
		}
		for (int i = 1; i < 2; i++) {
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
			cout << "# # # # #";
		}
		for (int k = 18; k < 28; k++) { //espacios para que no este pegado al borde todo el cuadrado
			cout << " ";
		}
		for (int j = 0; j < 13; j++) { //numero de * en la fila 
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
			cout << "# ";
		}
		for (int k = 0; k < 11; k++) { //espacios
			cout << " ";
		}
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
		cout << "# # # # # ";
		for (int k = 0; k < 10; k++) {
			cout << " ";
		}
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
		cout << "# # # # # ";
		for (int k = 0; k < 14; k++) {
			cout << " ";
		}
		cout << endl;
	}
	// ventanas
	for (int i = 0; i < 2; i++) {
		for (int i = 0; i < 9; i++) { // primera fila del primer arbol
			cout << " ";
		}
		for (int i = 1; i < 2; i++) {
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
			cout << "# # # # #";
		}
		for (int k = 18; k < 28; k++) { //espacios para que no este al borde
			cout << " ";
		}
		for (int j = 0; j < 1; j++) { //columnas 1 del cuadrado, luego va la ventana
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
			cout << "# ";
		}
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);
		cout << "# # # ";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
		cout << "# # # # # ";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);
		cout << "# # # ";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
		cout << "# ";
		for (int k = 0; k < 11; k++) { //espacios para separar la casa del arbol (lo verde)
			cout << " ";
		}
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
		cout << "# # # # # ";
		for (int k = 0; k < 10; k++) {
			cout << " ";
		}
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
		cout << "# # # # # ";

		cout << endl;
	}
	// arbol y puerta
	for (int i = 0; i < 4; i++) { //filas de toda la parte de abajo del cuadrado
		for (int i = 0; i < 11; i++) { // tronco del primer arbol
			cout << " ";
		}
		for (int i = 1; i < 2; i++) {
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
			cout << "# # #";
		}
		//puerta
		for (int k = 16; k < 28; k++) { //espacios para colocar las filas 
			cout << " ";
		}
		for (int j = 0; j < 5; j++) { //columnas rojas
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
			cout << "# ";
		}
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
		cout << "# # # ";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
		cout << "# # # # # ";
		for (int k = 0; k < 13; k++) { //espacios para separar la casa del arbol (el tronco que es amarillo)
			cout << " ";
		}
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
		cout << "# # # ";
		for (int k = 0; k < 14; k++) {
			cout << " ";
		}
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
		cout << "# # # ";
		cout << endl;
	}
	// gras
	for (int i = 0; i < 4; i++) { //filas
		for (int j = 0; j < 49; j++) { //columnas
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
			cout << "# ";
		}
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
		if (i == 0)
			cout << "########### ";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
		if (i == 0)
			cout << "# # # # #";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
		if (i == 1)
			cout << "# ";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
		if (i == 1)
			cout << "############ ";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
		if (i == 1)
			cout << "# # #";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
		if (i == 2)
			cout << "# # ";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
		if (i == 2)
			cout << "############# ";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
		if (i == 2)
			cout << "# #";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
		if (i == 3)
			cout << "# # # ";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
		if (i == 3)
			cout << "###############";
		cout << endl;
	}
}

int main() {
	figuras();
}