#pragma once
#include <iostream>
#include <conio.h>
using namespace std;
int main() {
    int* gl = new int;
    int* gv = new int;
    cout << "goles del equipo local\n"; cin >> *gl;
    cout << "goles del equipo visitante\n"; cin >> *gv;
    if (*gl >= 0 && *gv >= 0) {
        if (*gl > *gv)
            cout << "gana el equipo local";
        else
            if (*gl < *gv)
                cout << "gana el equipo visitante";
            else
                if (*gl = *gv)
                    cout << "empate";
    }
    _getch(); //9
}


#include <iostream>
#include <conio.h>
using namespace std;
int main() {
    int t1, t2, t3;
    float prop, total;
    cout << "cantidad de caramelos ambrosoli\n"; cin >> t1;
    cout << "cantidad de caramelos Tic Tac\n"; cin >> t2;
    cout << "cantidad de caramelos Donofrio\n"; cin >> t3;
    cout << "Ingrese la propina\n"; cin >> prop;
    total = t1 * 0.75 + t2 * 1.15 + t3 * 0.65;
    if (total > prop)
        cout << "La propina no alcanza";
    else
        if (total <= prop) {
            cout << "si alcanza\n";
            cout << "vuelto: " << total - prop;
        }
    _getch();  //10
}

#include <iostream>
#include <conio.h>
using namespace std;
int main() {
    float gb, pago;
    cout << "el numero de gb gastados"; cin >> gb;
    if (gb >= 0) {
        if (gb <= 4)
            cout << "pagara 50 soles";
        else
            if (gb > 4 && gb <= 8)
                cout << "pagara 85 soles";
            else
                if (gb > 8) {
                    pago = (85 + ((gb - 8) * 4.5));
                    cout << "el pago sera" << pago << "soles";
                }
    }
    _getch(); //11
}



#include <iostream>
#include <conio.h>
using namespace std;
int main() {
    int faltas, prom;
    cout << "promedio ponderado\n"; cin >> prom;
    cout << "numero de faltas\n"; cin >> faltas;
    if (prom >= 15 && faltas == 0)
        cout << "se le otorgara el 30% de beca";
    else
        if (prom < 15 || faltas != 0)
            cout << "no se le otorgara la beca";
    _getch();  //12
}



#include <iostream>
#include <conio.h>
using namespace std;
int main() {
    int ABC;
    int A, B, C;
    cout << "ingrese un numero de 3 cifras\n"; cin >> ABC;
    if (ABC > 99 && ABC < 10000) {
        A = ABC / 100;
        B = (ABC % 100) / 10;
        C = (ABC % 100) % 10;
        cout << "El nuevo numero es: " << C * 100 + B * 10 + A;
    }
    else
        cout << "El numero es incorrecto";
    _getch(); //13
}