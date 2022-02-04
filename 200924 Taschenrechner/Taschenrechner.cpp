// Taschenrechner.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
// KeksGauner - Datum 24.09.2020
#include <iostream>
#include <conio.h>
using namespace std;

double zahl1, zahl2 = 0;

void printintro() {
	cout << "******* Taschenrechner *******" << endl;
}

double zahlenabfrage() {
	cout << "Bitte geben Sie die erste Zahl ein: ";
	cin >> zahl1;

	cout << "Bitte geben Sie die zweite Zahl ein: ";
	cin >> zahl2;

	return zahl1, zahl2;
}

double summe(double zahl1, double zahl2) {
	double rechnung;
	rechnung = zahl1 + zahl2;
	return rechnung;
}

double differenz(double zahl1, double zahl2) {
	double rechnung = 0;
	rechnung = zahl1 - zahl2;
	return rechnung;
}

double produkt(double zahl1, double zahl2) {
	double rechnung = 0;
	rechnung = zahl1 * zahl2;
	return rechnung;
}

double quitient(double zahl1, double zahl2) {
	double rechnung = 0;
	rechnung = zahl1 / zahl2;
	return rechnung;
}

void printinfo() {
	cout << endl << "Summe: zahl1 + zahl2 = " << summe(zahl1, zahl2);
	cout << endl << "Differenz: zahl1 - zahl2 " << differenz(zahl1, zahl2);
	cout << endl << "Produkt: zahl1 * zahl2 " << produkt(zahl1, zahl2);
	cout << endl << "Quotient: zahl1 / zahl2 " << quitient(zahl1, zahl2);
}

void printende() {
	cout << endl  << "Betatigen Sie eine beligige Taste ...";
}

void main() {
	printintro();
	zahlenabfrage();
	printinfo();
	printende();

	getch();
}