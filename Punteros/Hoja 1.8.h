#pragma once
#include<iostream>
#include<conio.h>
using namespace std;

void invertido(int* num) {//4561
	int resto, invertido = 0;
	while (*num != 0) {
		//4561!=0  =V
		//456!=0  =V
		//45  !=0  =V
		//4  !=0  =V
		//0   !=0  =F
		resto = *num % 10;
		//		4561%10=1
		//		456%10=6
		//		45%10=5
		//		4%10=4
		*num = *num / 10;
		//		4561/10=456
		//		456/10=45
		//		45/10=4
		//		4/10=0
		invertido = invertido * 10 + resto;
		//				0*10+1=1
		//				1*10+6=16
		//				16*10+5=165
		//				165*10+4=1654

	}
	cout << "El número invesrtido es: " << invertido;
}

int main() {
	int* num = new int;
	cout << "Ingrese el numero: "; cin >> *num;  //4561
	invertido(num);
	getch();

}
