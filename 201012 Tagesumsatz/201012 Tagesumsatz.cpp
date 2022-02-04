// 201012 Tagesumsatz.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
// KeksGauner - Datum 12.10.2020

#include <iostream>
#include <conio.h>

using namespace std;

double normal, super, super_plus, diesel, summe = 0;

void eingabe();
void rechung();
void ausgabe();

void main() {
	cout << "========= Targesumsatz einer Tankstelle =========" << endl;
	eingabe();
	rechung();
	ausgabe();
	cout << endl << "========= ************ ***** ********** =========" << endl;


	getch();
}

void eingabe() {
	cout << "Normal in (l): ";
	cin >> normal;

	cout << "Super in (l): ";
	cin >> super;

	cout << "Super Plus in (l): ";
	cin >> super_plus;

	cout << "Diesel in (l): ";
	cin >> diesel;

}

void rechung() {

	normal *= 1.31;
	super *= 1.26;
	super_plus *= 1.39;
	diesel *= 1.07;

	summe = normal + super + super_plus + diesel;
}

void ausgabe() {
	char euro[] = " EURO";
	
	cout << endl << "Normal: " << normal << euro;
	cout << endl << "Super: " << super << euro;
	cout << endl << "Super Plus: " << super_plus << euro;
	cout << endl << "Diesel: " << diesel << euro;
	cout << endl << endl << "Summe: " << summe << euro;
}