/*
Projekt - Millionär
Name - KeksGauner
Klasse - TAI11
Datum - 26.11.2020
*/

#include <iostream>
#include <conio.h>
#include <Windows.h>
using namespace std;

void textcolor(WORD color) { SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color); }


void main()
{
	bool wiederholung = true;
	char eingabe;

	textcolor(11);
	cout << "#######################" << endl << "#";
	textcolor(12);
	cout << " Millionaer Rechnehr ";
	textcolor(11);
	cout << "#" << endl << "#######################" << endl << endl;





	do {
		textcolor(15);

		double jahre = 0, 
			kapital = 0, 
			zinssatz = 0, 
			anfangsKapital = 0;

		// Eingabe
		cout << "Kapital: ";
		cin >> anfangsKapital;
		cout << "Zinssatz: ";
		cin >> zinssatz;

		if (anfangsKapital >= 1000000) {
			textcolor(15);
			cout << endl << "Bekomme Ich dein ganzes geld? (y/n): ";
			cin >> eingabe;
			break;
		}

		// Berechnung
		kapital = anfangsKapital;
		while (kapital <= 1000000)
		{
			kapital = kapital + ((kapital * zinssatz) / 100);
			jahre++;

		}

		// Ausgabe
		textcolor(12);
		cout << endl << endl << "##############################################" << endl;
		
		textcolor(11);
		cout << "Mit dem Kapital: ";
		textcolor(10);
		cout << anfangsKapital;

		textcolor(11);
		cout << " EUR" << endl;
		cout << "Und den Zinssatz: ";
		textcolor(10);
		cout << zinssatz << endl;

		textcolor(11);
		cout << "Brauchen Sie ";
		textcolor(10);
		cout << jahre;
		textcolor(11);
		cout << " Jahre bis Sie Millionaer sind!";
		
		textcolor(12);
		cout << endl << "##############################################" << endl;

		textcolor(13);
		cout << endl << "Wollen Sie das Programm wiederholen y/n: ";
		cin >> eingabe;
		switch (eingabe)
		{
			case 'y': 
			{
						wiederholung = true;
						break;
			} 
			case 'n':
			{
						wiederholung = false;
						break;
			}
			default:
			{
					   wiederholung = false;
					   break;
			}
		}
			


	} while (wiederholung);
	// Ende

	textcolor(15);
	cout << "Zum beenden eine Taste druecken!";
	_getch();
}

