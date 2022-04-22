#pragma once
#include<iostream>
#include<conio.h>
//#include<stdlib.h>
#include <windows.h>
//using namespace System;
using namespace std;
void gotoxy(int x, int y)
{
    HANDLE hcon;
    hcon = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD dwPos;
    dwPos.X = x;
    dwPos.Y = y;
    SetConsoleCursorPosition(hcon, dwPos);
}
int valida_num(int* n) {
    do {
        cin >> *n;
    } while (*n < 0);
    return *n;
}
void graficar(int* n, int* x, int* y, char* c) {
    int color = 1;
    for (int i = 0; i < *n; i++) {
        gotoxy(*x, *y + i);
        /* Console::ForegroundColor = ConsoleColor::Red;
         Console::BackgroundColor = ConsoleColor::Green;
         Console::SetCursorPosition(*x, *y + i);*/
        for (int j = 0; j < *n; j++)
            cout << *c;
        cout << endl;
    }

}
void main()
{//declaro y reservo espacio
    int* n = new int;
    int* x = new int;
    int* y = new int;
    cout << "Ingrese n: ";
    *n = valida_num(n);
    cout << "Ingrese y: ";
    *y = valida_num(n);
    cout << "Ingrese x: ";
    *x = valida_num(n);
    char c;
    cout << "Ingrese caratacter: "; cin >> c;

    graficar(n, x, y, &c);

    _getch();
}