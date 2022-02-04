// Hello-World.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
// KeksGauner - Datum 17.09.2020

#include <iostream> // Ein- Ausgabebiblothek
#include <Windows.h> // Windowsbiblothek bzw. Sleep()
#include <conio.h> // fuer Konsolen- Ein-/ Ausgabe und getch()
using namespace std; // Namensbereich std


void main() { // Hauptrogramm

	system("color a"); // Farbe Green

	int i = 5; // Integer i mit dem wehrt 5 setzen
	while (i > 0) { // Wiederholen bis i == 0
		switch (i) { // Soll bei i Schalten
		case 2: // Falls die Zahl i eine 2 ist
			cout << "Noch 2 Sekunden" << endl; // Textausgabe
			system("color c");
			break; // Stopp
		case 1: // Falls die Zahl i eine 1 ist
			cout << "Noch 1 Sekunde" << endl; // Textausgabe
			system("color a");
			break; // Stopp
		default: // Als Default falls nichts zutrifft
			cout << "Noch " << i << " Sekunden" << endl; // Textausgabe
			break; // Stopp
		}

		Sleep(1000); // Wartet 1000 ms
		i--; // Zahl eins Minus nehmen
	}
	cout << endl << "Hello World!"; // Textausgabe
	cout << endl << "KeksGauner" << endl << "#########" << static_cast<unsigned char>(225) << "# ##" << endl << endl << "#### #####"; // Textausgabe rl
	getch(); // erwatet Zeicheneingabe

}
