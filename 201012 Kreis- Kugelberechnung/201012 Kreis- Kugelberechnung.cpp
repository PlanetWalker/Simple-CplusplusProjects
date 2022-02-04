// 201012 Kreis- Kugelberechnung.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
// KeksGauner - 12.10.2020

#include <iostream>
#include <conio.h>
using namespace std;

/*r		d			u		a 		v
 Radius	Durchmesser	Umfang	Fläche	Volumen*/
void main() {

	double pi = 3.141592654;
	double r, a, v, var1, var2;

	cout << "********** Kreis- Kugelberechnung **********";

	cout << endl << "Bitte geben Sie den Radius an ";
	cin >> r;

	// Rechnung Oberfläche = 4*pi*r2 bzw. pi*d2

	a =  4 * pi * (r*r);

	// Rechnung Volumen 4*pi*r3 /3 bzw. pi*d3 /6

	v = (4.0/3.0) * pi * (r * r * r);

	cout << endl << "Oberfläche " << a <<
		endl << "Volumen " << v << endl;

	getch();
}
