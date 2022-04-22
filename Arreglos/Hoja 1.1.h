#pragma once
#include <iostream>
using namespace std;

int main() {
    int* nota = new int[6];
    for (int i = 1; i <= 6; i++) {
        cout << "nota " << i << " : "; cin >> nota[i];
    }
}