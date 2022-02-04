// 200928 Mehrfachzuweisung.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
// KeksGauner - Datum 28.09.2020

#include <iostream>
#include <conio.h>
using namespace std;


void main() {
	int zahl1, zahl2, zahl3; // Deklariere die Variablen

	char zeichen1, zeichen2, zeichen3; // Deklariere die Variablen

	cout << "Geben Sie eine Zahl ein: ";
	cin >> zahl1;

	cout << "Geben Sie eine Zeichen ein: ";
	cin >> zeichen1;


	zahl2 = zahl3 = zahl1; // Mehrfachzuweisung von zahl1 auf alle anderen
	zeichen2 = zeichen3 = zeichen1; // Mehrfachzuweisung von zeichen1 auf alle anderen

	cout << "zahl1: " << zahl1 << endl << "zahl2: " << zahl2 << endl << "zahl3: " << zahl3 << endl 
		<< endl << "zeichen1: " << zeichen1 << endl << "zeichen2: " << zeichen2 << endl << "zeichen3: " << zeichen3; // Textausgabe

	getch(); // Warte auf Zeicheneingabe.
}

