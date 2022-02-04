// 210614 Motorradhaendler.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

// Biblothenken
#include <iostream>
#include <conio.h>
using namespace std;

// Inizalisieren
const int max = 100;
int maxid = 0;
int fsz1, fsz2;

// Strucktur
struct Personen {
	int motorradid;
	char marke[20];
	char modell[20];
	int baujahr;
	char farbe[20];
	int leistung;
};

// Prototypen / Deklaration
void menuPoint(int(*));
void eingabe(Personen *);
void ausgabe(Personen *);
void suche(Personen *);

int main()
{
	// Inizalisieren
	struct Personen Feld[max];

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
			eingabe(Feld);
			break;
		case 2:
			menuZahl = 0;
			ausgabe(Feld);
			break;
		case 3:
			menuZahl = 0;
			suche(Feld);
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
		<< "Willkommen bei den Motorradhaendler\n"
		<< "\n ################## \n"
		<< "  [1] Eingabe\n"
		<< "  [2] Augabe\n"
		<< "  [3] Suche\n"
		<< "  [4] Programm Ende\n"
		<< "\n ################## \n";
	cout << "Bitte das Menu eingeben: ";
	cin >> *menuZahl;
	cout << "\n\n\n";
}

void eingabe(Personen *Feld) {
	char tempEnde = 'y';
	do {
		maxid++;
		maxid = Feld[maxid].motorradid = maxid;
		cout << endl << "ID " << maxid << " Marke: ";
		cin >> Feld[maxid].marke;
		cout << "ID " << maxid << " Modell: ";
		cin >> Feld[maxid].modell;
		cout << "ID " << maxid << " Baujahr: ";
		cin >> Feld[maxid].baujahr;
		cout << "ID " << maxid << " Farbe: ";
		cin >> Feld[maxid].farbe;
		cout << "ID " << maxid << " Leistung[PS]: ";
		cin >> Feld[maxid].leistung;

		cout << endl << "Noch einen einlesen(y/n)? ";
		cin >> tempEnde;
	} while (tempEnde == 'y');
	cout << endl << endl << "Erfolgreich Eingegeben! Zurueck zum menu:";
}

void ausgabe(Personen *Feld) {
	for (int i = 1; i <= maxid; i++) {
		cout << endl << "ID " << i << " Marke: " << Feld[i].marke << endl;
		cout << "ID " << i << " Modell: " << Feld[i].modell << endl;
		cout << "ID " << i << " Baujahr: " << Feld[i].baujahr << endl;
		cout << "ID " << i << " Farbe: " << Feld[i].farbe << endl;
		cout << "ID " << i << " Leistung[PS]: " << Feld[i].leistung << endl;
	}
	cout << endl << endl << "Erfolgreich Ausgegeben! Zurueck zum menu:";
	char nullPointer = getch();
}

void suche(Personen *Feld) {
	int tempID = 0;
	cout << endl << "Bitte Baujahr angeben: ";
	cin >> tempID;
	for (int i = 1; i <= maxid; i++) {
		if (tempID == Feld[i].baujahr) {
			cout << endl << "ID " << i << " Marke: " << Feld[i].marke << endl;
			cout << "ID " << i << " Modell " << Feld[i].modell << endl;
			cout << "ID " << i << " Baujahr: " << Feld[i].baujahr << endl;
			cout << "ID " << i << " Farbe: " << Feld[i].farbe << endl;
			cout << "ID " << i << " Leistung[PS]: " << Feld[i].leistung << endl;
		}
	}
	cout << endl << endl << "Erfolgreich Gesucht! Zurueck zum menu:";
	char nullPointer = getch();
}
