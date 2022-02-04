// 20210722 Zahlsumme.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
// 

#include "normale_includes.h"

void eingabe(int*);
int interativ(int*);
int rekursiv(int);

void main()
{
	int start, stop;
	eingabe(&stop);

	cout << "ist Interativ: ";
	cout << interativ(&stop) << endl;
	cout << "und Rekursiv: ";
	cout << rekursiv(stop);

	_getch();
	exit(0);
}

void eingabe(int *stop) {
	cout << "Summe von: ";
	cin >> *stop;
}

int interativ(int *stop) {
	int erg = 0;
	for (int i = 0; i <= *stop; i++) {
		erg += i;
	}
	return erg;
}

int rekursiv(int stop) {
	if (stop > 0) {
		return rekursiv(stop - 1) + stop;
	}

	return (0);
}


/*
Simulation 4 durchläufe
int rekursiv(int stop) {
	if (stop > 0) {
1.		return 4 + (3a+ (2b + (1c + 0d)));
2.		return 3a + rekursiv(3 - 1);
3.		return 2b + rekursiv(2 - 1);
4.		return 1c + rekursiv(1 - 1);
	}

5.	return (0d);
}

*/