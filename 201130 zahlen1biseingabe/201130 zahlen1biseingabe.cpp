/*
Projekt - Zahlen1bisEingabe
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

    
	textcolor(9);
	int eingabe = 0;
	cout << "Bitte eine Zahl eingeben: ";
	cin >> eingabe;

	cout << endl;

	for (int i = 0; i <= eingabe; i++){
		if (!(i <= eingabe - 1)) {
			cout << i << "" << endl;

		}
		else {
			cout << i << ", ";

		}

	}

	cout << endl << "Bitte zum Beenden eine Taste druecken!";

	_getch();
}

