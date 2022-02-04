/*
Projekt - Body - Mass - Index
Name - KeksGauner
Klasse - TAI11
Datum - 16.11.2020
*/

#include <iostream>
#include <conio.h>
using namespace std;

void intro(); void outro();
void eingabe(); void berrechnung(); void ausgabe();

char geschlecht[20];
double gewicht, koerpergroesse, bmi;

void main()
{
	intro();
	eingabe();
	berrechnung();
	ausgabe();
	outro();
	getch();
}

void intro() {
	cout << "############ BMI ############" << endl << endl;
}
void outro() {
	cout << endl << endl << "Duecken Sie eine Taste!" << endl << "############ ### ############" << endl;
}
void eingabe() {
	cout << "Ihr Geschlecht (m/w): ";
	cin >> geschlecht;
	cout << "Ihr Gewicht (kg): ";
	cin >> gewicht;
	cout << "Ihre Koerpergroesse (cm): ";
	cin >> koerpergroesse;
}
void berrechnung() {

	koerpergroesse /= 100;
	bmi = gewicht / (koerpergroesse * koerpergroesse);

}
void ausgabe() {

	cout << endl << "Ihr wert liegt bei " << (int) bmi << " und haben somit ";

	if ((string)geschlecht == "w") {
		if (bmi < 19) { 
            cout << "Untergewicht"; 
        }
		else if (bmi >= 19 && bmi <= 24) { 
            cout << "Normalgewicht"; 
        }
		else if (bmi > 24) { 
            cout << "Uebergewicht"; 
        }
	}
	else if ((string)geschlecht == "m") {
		if (bmi < 20) { 
            cout << "Untergewicht"; 
        }
		else if (bmi >= 20 && bmi <= 25) {
			cout << "Normalgewicht";

		}
		else if (bmi > 25) {
			cout << "Uebergewicht";
		}
	}
	else {
		cout << "Unbekannt";
	}
	cout << "!";
}