// 210607 Urlauberzahlen.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

// Biblothenken
#include <iostream>
#include <conio.h>
using namespace std;

// Inizalisieren
const int max1 = 5, max2 = 1;
int fsz1, fsz2;

// Prototypen / Deklaration
void menuPoint(int(*));
void eingabe(int(*)[max1][max2]);
void ausgabe(int(*)[max1][max2]);
void statistik(int(*)[max1][max2]);

int main()
{
	// Inizalisieren
	int feld[max1][max2];

	char tempEnde = 'n';
	int menuZahl = 0;

	do {
		switch (menuZahl) {
		default:
			menuZahl = 0;
			cout << "\n\n\nFalsche eingabe!\n\n\n";
			menuPoint(&menuZahl);
			break;
		case 0:
			menuZahl = 0;
			menuPoint(&menuZahl);
			break;
		case 1:
			menuZahl = 0;
			eingabe(&feld);
			break;
		case 2:
			menuZahl = 0;
			ausgabe(&feld);
			break;
		case 3:
			menuZahl = 0;
			statistik(&feld);
			break;
		case 4:
			menuZahl = 0;
			cout << "Wollen Sie das Programm wirklich beenden? (y/n) ";
			cin >> tempEnde;
			break;
		}

	} while (tempEnde == 'n');
	return 0;
}

void menuPoint(int(*menuZahl)) {
	cout << endl << endl 
		<< "Willkommen in der Zentrale\n"
		<< "\n ################## \n"
		<< "  [1] Eingabe\n"
		<< "  [2] Augabe\n"
		<< "  [3] Statistik\n"
		<< "  [4] Programm Ende\n"
		<< "\n ################## \n";
	cout << "Bitte das Menu eingeben: ";
	cin >> *menuZahl;
	cout << "\n\n\n";
}

void eingabe(int(*feld)[max1][max2]) {
	for (fsz1 = 0; fsz1 < max1; fsz1++) {
		for (fsz2 = 0; fsz2 < max2; fsz2++) {
			cout << "Region: " << fsz1 + 1 << ", Urlauber: ";
			cin >> *feld[fsz1][fsz2];
		}
	}
	cout << endl << endl << "Erfolgreich Eingegeben! Zurueck zum menu:";
}

void ausgabe(int(*feld)[max1][max2]) {
	for (fsz1 = 0; fsz1 < max1; fsz1++) {
		for (fsz2 = 0; fsz2 < max2; fsz2++) {
			cout << "Region: " << fsz1 + 1 << ", Urlauber: " << *feld[fsz1][fsz2] << endl;
		}
	}
	cout << endl << endl << "Erfolgreich Ausgegeben! Zurueck zum menu:";
}

void statistik(int(*feld)[max1][max2]) {

}