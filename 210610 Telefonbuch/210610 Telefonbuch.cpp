// 210610 Telefonbuch.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
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
	int userid;
	char name[20];
	char vorname[20];
	char street[20];
	int hausnummer;
	int plz;
	char ort[20];
	char telefonnummer[20];
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
		<< "Willkommen in der Telephonbuchzentrale\n"
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
		maxid = Feld[maxid].userid = maxid;
		cout << endl << "UserID " << maxid << " Vorname: ";
		cin >> Feld[maxid].vorname;
		cout << "UserID " << maxid << " Name: ";
		cin >> Feld[maxid].name;
		cout << "UserID " << maxid << " Street: ";
		cin >> Feld[maxid].street;
		cout << "UserID " << maxid << " Hausnummer: ";
		cin >> Feld[maxid].hausnummer;
		cout << "UserID " << maxid << " PLZ: ";
		cin >> Feld[maxid].plz;
		cout << "UserID " << maxid << " Ort: ";
		cin >> Feld[maxid].ort;
		cout << "UserID " << maxid << " Telefonnummer: ";
		cin >> Feld[maxid].telefonnummer;

		cout << endl << "Noch einen einlesen(y/n)? ";
		cin >> tempEnde;
	} while (tempEnde == 'y');
	cout << endl << endl << "Erfolgreich Eingegeben! Zurueck zum menu:";
}

void ausgabe(Personen *Feld) {
	for (int i = 1; i <= maxid; i++) {
		cout << endl << "UserID " << i << " Vorname: " << Feld[i].vorname << endl;
		cout << "UserID " << i << " Name: " << Feld[i].name << endl;
		cout << "UserID " << i << " Street: " << Feld[i].street << endl;
		cout << "UserID " << i << " Hausnummer: " << Feld[i].hausnummer << endl;
		cout << "UserID " << i << " PLZ: " << Feld[i].plz << endl;
		cout << "UserID " << i << " Ort: " << Feld[i].ort << endl;
		cout << "UserID " << i << " Telefonnummer: " << Feld[i].telefonnummer << endl;
	}
	cout << endl << endl << "Erfolgreich Ausgegeben! Zurueck zum menu:";
	char nullPointer = getch();
}

void suche(Personen *Feld) {
	int tempID = 0;
	cout << endl << "Bitte UserID angeben: ";
	cin >> tempID;
	for (int i = 1; i <= maxid; i++) {
		if (tempID == Feld[i].userid) {
			cout << endl << "UserID " << i << " Vorname: " << Feld[i].vorname << endl;
			cout << "UserID " << i << " Name: " << Feld[i].name << endl;
			cout << "UserID " << i << " Street: " << Feld[i].street << endl;
			cout << "UserID " << i << " Hausnummer: " << Feld[i].hausnummer << endl;
			cout << "UserID " << i << " PLZ: " << Feld[i].plz << endl;
			cout << "UserID " << i << " Ort: " << Feld[i].ort << endl;
			cout << "UserID " << i << " Telefonnummer: " << Feld[i].telefonnummer << endl;
		}
	}
	cout << endl << endl << "Erfolgreich Gesucht! Zurueck zum menu:";
	char nullPointer = getch();
}