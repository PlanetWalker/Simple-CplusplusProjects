/*
Projeckt - Zahlenvergleich
Name - KeksGauner
Klasse - TAI11
Datum - 12.11.2020
*/


#include <iostream>
#include <conio.h>
using namespace std;

void main() {
	int zahl;
	cout << "Geben Sie Ihre wunschzahl ein: ";
	cin >> zahl;

	if (zahl < 100) {
		cout << "Zahl ist A: Zahl < 100";
	}
	else if (zahl > 100) {
		cout << "Zahl ist A: Zahl > 100";
	}
	else {
		cout << "Zahl ist A: Zahl = 100";
	}

	getch();
}