// 201008 Adresseingabe.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
// KeksGauner - Datum 08.10.2020

#include "iostream"
#include "conio.h"
using namespace std;

void main() {

	char vorname[20], name[20], strasse[20], ort[20];
	int hausnummer, postleitzahl;

	cout << "Vorname ";
	cin >> vorname;
	cout << "Name ";
	cin >> name;
	cout << "Strasse ";
	cin >> strasse;
	cout << "Hausnummer ";
	cin >> hausnummer;
	cout << "PLZ ";
	cin >> postleitzahl;
	cout << "Ort ";
	cin >> ort;

	cout << endl << vorname << " " << name
		<< endl << strasse << " " << hausnummer
        << endl 
		<< endl << postleitzahl << " " << ort;
	getch();
}

