// 201015 Alkoholgehalt.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
// KeksGauner - Datum 15.10.2020

#include <iostream>
#include <conio.h>

using namespace std;

void eingabe();
void rechnung();
void ausgabe();

char sex = 'm';
double kg, 
	bier, 
	wein, 
	schnaps, 
	repro, 
	alles, 
	erg;

void main() {

	cout << endl << "+-++-++-++-+ Alkoholgehalt Rechner +-++-++-++-+" << endl;
	eingabe();
	rechnung();
	ausgabe();
	cout << endl << "+-++-++-++-+ ############# ####### +-++-++-++-+" << endl;
	getch();
}

void eingabe() {
	cout << "Geschlecht (m/w): ";
	cin >> sex;

	cout << "Gewicht (kg): ";
	cin >> kg;

	cout << "Bier (0.5l): ";
	cin >> bier;

	cout << "Wein (0.2l): ";
	cin >> wein;

	cout << "Schnaps (0.2l): ";
	cin >> schnaps;

}

void rechnung() {
	alles = bier * 20 + wein * 20 + schnaps * 7;

	if (sex == 'w') {
		repro = 0.6;
	} else {
		repro = 0.7;
	}

	//c = 1000 * A / m*r;
	erg = alles / (kg*repro);

}

void ausgabe() {
	cout << endl << "Sie haben " << erg << " Alkohol im Blut.";
}