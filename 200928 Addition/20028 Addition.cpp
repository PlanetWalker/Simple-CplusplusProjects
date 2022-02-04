// 20028 Addition.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
// KeksGauner - Datum 28.09.2020

#include <iostream>
#include <conio.h>
using namespace std;
int zahl1, zahl2;

void eingabe(){

	cout << "Bitte geben Sie die erste Zahl ein: ";
	cin >> zahl1;

	cout << "Bitte geben Sie die zweite Zahl ein: ";
	cin >> zahl2;
}


int summe(int zahl1, int zahl2) {
	int ergebnis;

	ergebnis = zahl1 + zahl2;

	return ergebnis;
}

void ausgabe() {
	cout << "Summe: " << summe(zahl1, zahl2) << endl;
}

void main() {

	eingabe();
	ausgabe();

	getch();
}

