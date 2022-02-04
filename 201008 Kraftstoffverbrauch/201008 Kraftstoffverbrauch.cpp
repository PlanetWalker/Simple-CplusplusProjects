// 201008 Kraftstoffverbrauch.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
// KeksGauner - Datum 08.10.2020
#include <iostream>
#include <conio.h>
using namespace std;

// Variablen
/*
gest = gefahrene Strecke (km)
vbksm = verbrauchte Kraftstoffmenge (l)
erg = Ergebnis
dsv = Duchschnittsverbrauch
*/
double gest, vbksm, erg, dsv;

void printintro();

void eingabe();
double dsvrechnung(double gest, double vbksm);
void rechenergebnis();
void printoutro();

void main() {
	printintro();
	eingabe(); // Eingabe von gest und vbksm
	rechenergebnis();
	printoutro();
	getch();
}

void printintro() { // Print INTRO
	cout << "********* Kraftstoffverbrauch Rechner *********" << endl;
}

void eingabe() { // Eingabe von gest und vbksm

	cout << "Verbrauchte Liter: ";
	cin >> vbksm;

	cout << "Strecke (in Kilometer): ";
	cin >> gest;
}
double dsvrechnung(double gest, double vbksm) { // Rechner
	erg = 0;

	erg = (vbksm * 100) / gest;

	return erg;
}
void rechenergebnis() { // Ausgabe Ergebnis
	cout << endl << vbksm << " Liter x 100 : " << gest << " Kilometer" << endl;

	cout << endl << "Duchschnittsverbrauch liegt bei " << dsvrechnung(gest, vbksm) << " Liter pro 100 Kilometer." << endl;
}

void printoutro() {
	cout << endl << "Beliebige Taste Eingeben ..." << endl;
}


