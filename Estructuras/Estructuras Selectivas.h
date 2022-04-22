#pragma once
#include <iostream>
#include <conio.h>
using namespace std;
char validaproducto(char producto) {
    if (!(producto == 'O' || producto == 'J' || producto == 'U'))
        cout << "el tipo de producto no existe";
}
char validacelular(char celular) {
    if (!(celular == 'i' || celular == 'A'))
        cout << "El tipo de celular no existe";
}
int main() {
    char producto, celular;
    int cantidad_u;
    float pago;
    cout << "tipo de producto: "; cin >> producto;
    cout << "tipo de celular: "; cin >> celular;
    cout << "cantidad de unidades a comprar: "; cin >> cantidad_u;
    switch (producto) {
        validaproducto(producto);
    case 'O':
        validacelular(celular);
        if (celular == 'i')
            pago = cantidad_u * 50.6;
        if (celular == 'A')
            pago = cantidad_u * 20.3;
        break;
    case 'J':
        validacelular(celular);
        if (celular == 'i')
            pago = cantidad_u * 90.8;
        if (celular == 'A')
            pago = cantidad_u * 40.5;
        break;
    case 'U':
        validacelular(celular);
        if (celular == 'i')
            pago = cantidad_u * 60.5;
        if (celular == 'A')
            pago = cantidad_u * 30.6;
        break;
    default: cout << "Error";
        break;
    }
    cout << "El monto a pagar sera: " << pago;
    _getch();
}