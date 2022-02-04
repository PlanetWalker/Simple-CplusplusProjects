// 210614 Weitsprung.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

// Disable Warning
#pragma warning(suppress : 4996)
#define _CRT_SECURE_NO_WARNINGS

// Biblothenken
#include <iostream>
#include <conio.h>
using namespace std;

// Inizalisieren
const int maxfeld = 50;
int maxid = 1;
int fsz1, fsz2;

// Strucktur
struct datum {
	int tag, monat, jahr;
};
struct Personen {
	int personid;
	char name[20];
	char vorname[20];
	struct datum geburtsdatum;
	float spruenge[4];
};

// Prototypen / Deklaration
void menuPoint(int(*));
void eingabe(Personen*);
void ausgabe(Personen*);
void suche(Personen*);

int main()
{
	// Inizalisieren
	struct Personen Feld[maxfeld];
	// setLOCALE GLOBAL
	locale::global(locale("de"));

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
	exit(0);
	return 42;
}

void menuPoint(int(*menuZahl)) {
	cout << endl << endl
		<< "Willkommen im Weitsprung Menu\n"
		<< "\n ################## \n"
		<< "  [1] Eingabe\n"
		<< "  [2] Augabe\n"
		<< "  [3] Suche\n"
		<< "  [4] Programm Ende\n"
		<< "\n ################## \n";
	cout << "Bitte das Menu eingeben: ";
	cin.clear();
	cin >> *menuZahl;
	if (cin.fail()) // Wenn die eingabe fehl schlgt z.B. anstatt ein int ein char eingegeben wird
	{
		cin.clear(); // cin.clear löscht den inhalt von cin
		cin.ignore(255, '\n'); // cin.ignore ignoriert 255 zeichen bis zum \n also leerzeichen
		cout << "\n\n\nNot a number";
	}
	cout << "\n\n\n";
}

bool check_fail() {
	bool fail = false;
	if (cin.fail())
	{
		fail = true;
		cin.clear();
		cin.ignore(255, '\n');
		cout << "\n\nEingabe fehlgeschlagen: Not a number\n";
	}
	return fail;
}

void eingabe(Personen* Feld) {
	int tempmax = 0;
	printf("\nWie viele sollen eingelesen werden(max 50)? ");
	scanf("%d", &tempmax);
	fflush(stdin); // lässt den inhalt fallen
	for (int i = maxid; i < maxid + tempmax; i++) {
		Feld[i].personid = i;
		cout << endl << "ID " << i << " Vorname: ";
		cin >> Feld[i].vorname;
		if (check_fail()) return;
		cout << "ID " << i << " Name: ";
		cin >> Feld[i].name;
		if (check_fail()) return;
		cout << "ID " << i << " Geburtsdatum: " << endl;
		cout << "ID " << i << " > Tag: ";
		cin >> Feld[i].geburtsdatum.tag;
		if (check_fail()) return;
		cout << "ID " << i << " > Monat: ";
		cin >> Feld[i].geburtsdatum.monat;
		if (check_fail()) return;
		cout << "ID " << i << " > jahr: ";
		cin >> Feld[i].geburtsdatum.jahr;
		if (check_fail()) return;
		cout << "ID " << i << " Sprung 1: ";
		cin >> Feld[i].spruenge[1];
		if (check_fail()) return;
		cout << "ID " << i << " Sprung 2: ";
		cin >> Feld[i].spruenge[2];
		if (check_fail()) return;
		cout << "ID " << i << " Sprung 3: ";
		cin >> Feld[i].spruenge[3];
		if (check_fail()) return;
	}
	maxid += tempmax;
	cout << endl << endl << "Erfolgreich Eingegeben! Zurueck zum menu:";
}


void ausgabe(Personen* Feld) {
	int sprung_temp_meter = 0, sprung_temp_id = 0, best_temp_meter = 0, best_temp_id = 0;
	for (int i1 = 1; i1 < maxid; i1++) {
		sprung_temp_meter = 0; sprung_temp_id = 0;
		cout << endl << "ID " << i1 << " Name: " << Feld[i1].name << endl;
		cout << "ID " << i1 << " Vorname: " << Feld[i1].vorname << endl;
		cout << "ID " << i1 << " Geburtsdatum: " << Feld[i1].geburtsdatum.tag << "." << Feld[i1].geburtsdatum.monat << "." << Feld[i1].geburtsdatum.jahr << endl;
		cout << "ID " << i1 << " Sprung 1: " << Feld[i1].spruenge[1] << endl;
		cout << "ID " << i1 << " Sprung 2: " << Feld[i1].spruenge[2] << endl;
		cout << "ID " << i1 << " Sprung 3: " << Feld[i1].spruenge[3] << endl;
		cout << "ID " << i1 << " Bester Sprung: " << endl;
		for (int i2 = 1; i2 < 4; i2++) {
			// MACH DAS DOOOOCCCHHHH!!!!!!!
			if (sprung_temp_meter <= Feld[i1].spruenge[i2]) {
				sprung_temp_meter = Feld[i1].spruenge[i2];
				sprung_temp_id = i1;
			}

			if (best_temp_meter <= Feld[i1].spruenge[i2]) {
				best_temp_meter = Feld[i1].spruenge[i2];
				best_temp_id = i1;
			}
		}
		cout << "ID " << i1 << " > Sprung " << sprung_temp_id << ": " << sprung_temp_meter << endl;
	}
	cout << endl << "Der BESCHTE Sprung hat " << Feld[best_temp_id].name << " hingelegt mit erstaunlichen " << best_temp_meter << " Metern! Der Knecht KILLT ALLE ANDEREN!!!" << endl;
	cout << endl << endl << "Erfolgreich Ausgegeben! Zurueck zum menu:";
	char nullPointer = _getch();
}

void suche(Personen* Feld) {
	char tempName[27] = "abcdefghijklmnopqrstuvwxyz";
	cout << endl << "Bitte Name angeben: ";
	cin >> tempName;
	for (int i = 1; i < maxid; i++) {
		if (!strcmp(tempName, Feld[i].name)) {
			cout << endl << "ID " << i << " Name: " << Feld[i].name << endl;
			cout << "ID " << i << " Vorname: " << Feld[i].vorname << endl;
			cout << "ID " << i << " Geburtsdatum: " << Feld[i].geburtsdatum.tag << "." << Feld[i].geburtsdatum.monat << "." << Feld[i].geburtsdatum.jahr << endl;
			cout << "ID " << i << " Sprung 1: " << Feld[i].spruenge[1] << endl;
			cout << "ID " << i << " Sprung 2: " << Feld[i].spruenge[2] << endl;
			cout << "ID " << i << " Sprung 3: " << Feld[i].spruenge[3] << endl;
		}
	}
	cout << endl << endl << "Erfolgreich Gesucht! Zurueck zum menu:";
	char nullPointer = _getch();
}
