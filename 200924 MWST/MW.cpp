// Hello-World2.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
// KeksGauner - Datum 24.09.2020
#include <iostream>
#include <conio.h>
using namespace std;


const float mwst = 0.19;
float netto = 0;
float brotto = 0;

void main() {

		cout << "Eingabe Netto Preis: ";
		cin >> (float)netto;

		if (cin.fail()) {
			cout << "Einlesen fehlgeschlagen!" << endl << "Zum Beenden eine taste druecken ..." << endl;
		}
		else {
			brotto = netto * (1.0 + mwst);

			cout << "Brutto Preis: ";
			cout << (float)brotto << endl << "Zum Beenden eine taste druecken ..." << endl;
		}
		getch();

}