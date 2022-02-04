/*
Projekt - Zweierpotenz
Name - KeksGauner
Klasse - TAI11
Datum - 30.11.2020
*/

#include <iostream>
#include <conio.h>
#include <Windows.h>
using namespace std;

void textcolor(WORD color) { SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color); }

void main()
{
	int ergebnis = 1, exponent = 0;
	textcolor(11);

	cout << endl << " == Exponent Rechnehr == " << endl;

	textcolor(12);
	cout << endl << "Bitte geben Sie den Exponenten ein: ";
	textcolor(10);
	cin >> exponent;

	for (int i = 1; i <= exponent; i++) ergebnis *= 2;

	textcolor(11);
	cout << endl << "ERGEBNIS" << endl;
	textcolor(12);
	cout << "2 hoch "; 
	textcolor(10);
	cout << exponent;
	textcolor(12);
	cout << " = "; 
	textcolor(10);
	cout << ergebnis;



	textcolor(10);
	cout << endl << endl << "Zum WILDEN BEEENDEN DES PROGRAMMES: ";
	textcolor(13);
	cout << "\nEinfach mit dem Kopf ueber die Tastatur streichen \noder eine Katze beauftragen!";
	_getch();
	textcolor(11);
	cout << "\nWIIILLLLLDDDDD!";

	_getch();
}

