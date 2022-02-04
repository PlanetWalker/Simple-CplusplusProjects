
#include <iostream>
#include <conio.h>
using namespace std;
struct Person {
	char vorname[30];
	char name[30];
	char ort[20];
};
void eingabe(Person *);
void ausgabe(Person *);

void main() {
	struct Person Feld[3];
	eingabe(Feld);
	ausgabe(Feld);
}

void eingabe(Person *Zeiger) {
	for (int i = 0; i < 3; i++) {
		cout << "\nPerson " << i + 1 << " :";
		cout << "Geben sie den Vornamen ein: ";
		cin >> Zeiger[i].vorname;
		cout << "Geben sie den Namen ein: ";
		cin >> Zeiger[i].name;
		cout << "geben sie den Ort ein: ";
		cin >> Zeiger[i].ort;
	}
}

void ausgabe(Person *Zeiger) {
	for (int i = 0; i < 3; i++) {
		cout << "\nPerson" << i + 1 << " : ";
		cout << "\nNamen: " << Zeiger[i].name;
		cout << "\nVornamen: " << Zeiger[i].vorname;
		cout << "\nOrt: " << Zeiger[i].ort<< endl;
		getch();
	}
}