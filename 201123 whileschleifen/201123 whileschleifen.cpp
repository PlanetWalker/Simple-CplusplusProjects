/*
Projekt - Whileschleifen
Name - KeksGauner
Klasse - TAI11
Datum - 23.11.2020
*/

#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;

void textcolor(WORD color) { SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color); }


void main()
{

	int x = 0;

	textcolor(10);
	cout << "while-Schleife" << endl << endl;

	textcolor(12);
	x = 2;
	while (x <= 20) {
		cout << x << endl;
		x += 2;
	}

	textcolor(10);
	cout << "do-while-Schleife \"fussgesteuert\"" << endl << endl;

	textcolor(12);
	x = 2;
	do {
		cout << x << endl;
		x += 2;
	} while (x <= 20);

	_getch();
}

