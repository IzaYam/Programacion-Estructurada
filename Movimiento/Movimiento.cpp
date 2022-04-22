#include "pch.h"
#include <iostream>
#include <conio.h>
#include <Windows.h>
#include <stdio.h>
#include <time.h>
#include <string>

using namespace System;
using namespace std;

#define ARRIBA 72
#define ABAJO 80
#define IZQUIERDA 75
#define DERECHA 77

int matriz[11][11] = {
{1,1,1,1,1,1,1,1,1,1,1},
{2,0,2,0,2,0,2,0,2,0,2},
{2,1,2,1,2,1,2,1,2,1,2},
{2,0,2,0,2,0,2,0,2,0,2},
{2,1,2,1,2,1,2,1,2,1,2},
{2,0,2,0,2,0,2,0,2,0,2},
{2,1,2,1,2,1,2,1,2,1,2},
{2,0,2,0,2,0,2,0,2,0,2},
{2,1,2,1,2,1,2,1,2,1,2},
{2,0,2,0,2,0,2,0,2,0,2},
{1,1,1,1,1,1,1,1,1,1,1} };

void gotoxy(int x, int y) { Console::SetCursorPosition(x, y); }

void dibujar_mapa() {
	for (int i = 0; i < 11; ++i) {
		for (int j = 0; j < 11; ++j) {
			if (matriz[i][j] == 1) cout << "-";
			if (matriz[i][j] == 0) cout << " ";
			if (matriz[i][j] == 2) cout << "|";
		}
		cout << endl;
	}
}


struct Player {
	int y;
	int x;
	int color;

	void dibujar_Jugador(int x, int y, int peon) {
		gotoxy(x, y);
		Console::ForegroundColor = ConsoleColor::Blue;
		cout << peon;
	}

	void mover(int peon) {
		char tecla = _getch();
		if (kbhit) {
			gotoxy(x, y); Console::ForegroundColor = ConsoleColor::Black; cout << " ";
			if (tecla == IZQUIERDA && x > 2) x -= 2;
			if (tecla == DERECHA && x < 8) x += 2;
			if (tecla == ARRIBA && y > 2) y -= 2;
			if (tecla == ABAJO && y < 8) y += 2;
			gotoxy(x, y); Console::ForegroundColor = ConsoleColor::Blue; cout << peon;
		}
	}
};

int main() {
	Player j1, j2;
	j1.x = 1; j1.y = 1;
	j2.x = 1; j2.y = 5;
	dibujar_mapa();
	j1.dibujar_Jugador(1, 1, 1);
	j2.dibujar_Jugador(1, 5, 2);
	int turno = 0;
	while (1) {
		j1.mover(1);

	}
}