// 200928 Division.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
// KeksGauner - Datum 28.09.2020

#include <iostream>
#include <conio.h>
using namespace std;


void main() {
	
	int ergebnis, modulo = 0;
	float fzahl1, fzahl2, fergebnis = 0;

	cout << "Bitte geben Sie die erste Kommerzahl ein: ";
	cin >> (float)fzahl1;

	cout << "------- geteiltdurch --------" << endl;

 	cout << "Bitte geben Sie die zweite Kommerzahl ein: ";
	cin >> (float)fzahl2;

	(float)fergebnis = (float)fzahl1 / (float)fzahl2; // fergebnis

	(int)ergebnis = (int)fzahl1 / (int)fzahl2; // "normale" division
	(int)modulo = (int)fzahl1 % (int)fzahl2;

	cout << endl << "Eregbnis (mit DIV): " << fergebnis
		<< endl << "Eregbnis (ohne DIV): " << ergebnis
		<< endl << "Modulo: " << modulo
		<< endl;

	getch();

}

