#pragma once
#include <iostream>
#include <conio.h>
using namespace std;
int main() {
    char escala;
    int n_c;
    float cuotavariable, cuotafija, importe;
    cuotafija = 350;
    cout << "Escala\n"; cin >> escala;
    cout << "Cursos\n"; cin >> n_c;
    switch (escala) {
    case 'A': case 'a':
        if (n_c >= 1 && n_c <= 5)
            cuotavariable = 400;
        if (n_c >= 6 && n_c <= 8)
            cuotavariable = 600;
        if (n_c >= 9)
            cuotavariable = 900;
        break;
    case 'B': case 'b':
        if (n_c >= 1 && n_c <= 3)
            cuotavariable = 350;
        if (n_c >= 4 && n_c <= 7)
            cuotavariable = 500;
        if (n_c >= 8)
            cuotavariable = 700;
        break;
    case 'C': case 'c':
        if (n_c >= 1 && n_c <= 3)
            cuotavariable = 320;
        if (n_c >= 4 && n_c <= 7)
            cuotavariable = 480;
        if (n_c >= 8)
            cuotavariable = 685;
        break;
    case 'D': case'd':
        if (n_c >= 1 && n_c <= 4)
            cuotavariable = 310;
        if (n_c >= 5 && n_c <= 8)
            cuotavariable = 475;
        if (n_c >= 9)
            cuotavariable = 680;
        break;
    default: "error";
        break;
    }
    importe = cuotafija + cuotavariable;
    cout << "El importe a cancelar sera: " << importe;
    _getch(); //28
}


#include <iostream>
#include <conio.h>
using namespace std;
int main() {
    char modelo;
    int placa;
    float costo;
    cout << "ingrese el modelo\n"; cin >> modelo;
    cout << "ingrese ultimo digito de la placa\n"; cin >> placa;
    cout << "ingrese el costo del matenimiento\n"; cin >> costo;
    switch (modelo)
        case 'A': case 'a':
            if (placa >= 0 && placa <= 5) {
                if (costo <= 500)
                    cout << "enero";
                else
                    if (costo > 500)
                        cout << "febrero";
            }
            if (placa >= 6 && placa);

} //29

#include <iostream>
#include <conio.h>
using namespace std;
int main() {
    int platos;
    float monto, costo, total;
    char tipomenu;
    cout << "ingrese en tipo de menu\n"; cin >> tipomenu;
    cout << "ingrese la cantiad de platos\n"; cin >> platos;
    cout << "ingrese el costo\n"; cin >> costo;
    monto = (tipomenu == 'N' && platos < 5) * (0);
    monto = (tipomenu == 'N' && (platos >= 5 && platos <= 20)) * (0.08);
    monto = (tipomenu == 'N' && (platos >= 21 && platos <= 50)) * (0.1);
    monto = (tipomenu == 'N' && platos > 50) * (0.15);
    monto = (tipomenu == 'E' && platos < 5) * (0);
    monto = (tipomenu == 'E' && (platos >= 5 && platos <= 20)) * (0.08);
    monto = (tipomenu == 'E' && (platos >= 21 && platos <= 50)) * (0.12);
    monto = (tipomenu == 'E' && platos > 50) * (0.15);
    total = (costo - monto);
    cout << "el total a pagar sera: " << total << "soles";
}