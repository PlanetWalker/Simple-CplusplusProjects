/*
Projekt - Notenbezeichnung
Name - KeksGauner
Klasse - TAI11
Datum - 19.11.2020
*/

#include <iostream>
#include <conio.h>
using namespace std;

void main()
{

	cout << endl << "================ Notenbezeichnung ================" << endl;
	int note;
	cout << "Bitte geben Sie die Note [1-6] ein: ";
	cin >> (int)note;

	switch (note) {
	case 1:
	{
			  cout << endl << "Note " << note << " Ihre Leistung ist " << "sehr gut";
		break; 
	}
	case 2:
	{
			  cout << endl << "Note " << note << " Ihre Leistung ist " << "gut";
		break;
	}
	case 3:
	{
			  cout << endl << "Note " << note << " Ihre Leistung ist " << "befriedigend";
		break;
	}
	case 4:
	{
			  cout << endl << "Note " << note << " Ihre Leistung ist " << "ausreichend";
		break;
	}
	case 5:
	{
			  cout << endl << "Note " << note << " Ihre Leistung ist " << "mangelhaft";
		break;
	}
	case 6:
	{
			  cout << endl << "Note " << note << " Ihre Leistung ist " << "ungenuegend";
		break;
	}
	}

	cout << endl << endl << "================ ################ ================";
	cout << endl << "Druecken Sie eine Taste um das Programm zu beenden!";
	_getch();
}

