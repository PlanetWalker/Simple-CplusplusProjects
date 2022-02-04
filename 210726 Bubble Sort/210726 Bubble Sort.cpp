// 210726 Bubble Sort.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdafx.h"


/*
void main()
{
	const int feltGreoesse = 5;
	int feld[feltGreoesse];
	int temp;

	for (int i = 0; i < feltGreoesse; i++) {
		cout << "Wehrt " << i + 1 << " = ";
		cin >> feld[i];
	}
	cout << "SOTIERE ..." << endl;
	for (int x = 0; x < feltGreoesse; x++) {
		for (int y = 0; y < feltGreoesse - 1; y++) {
			if (feld[y] > feld[y + 1]) {
				temp = feld[y];
				feld[y] = feld[y + 1];
				feld[y + 1] = temp;
				cout << "Tausche " << feld[y + 1] << " mit " << feld[y] << endl;
			}
		}
	}


	cout << "Fertig!" << endl;
	for (int i = 0; i < feltGreoesse; i++) {
		cout << "Wehrt " << i + 1 << " = " << feld[i] << endl;
	}
	_getch();
	exit(0);
}
*/

/*
void main()
{
	const int feltGreoesse = 5;
	int feld[feltGreoesse];
	int temp;
	bool fertig = true;

	for (int i = 0; i < feltGreoesse; i++) {
		cout << "Wehrt " << i + 1 << " = ";
		cin >> feld[i];
	}
	cout << "SOTIERE ..." << endl;
	for (int x = 0; x < feltGreoesse; x++) {
		fertig = true;
		for (int y = 0; y < feltGreoesse - 1; y++) {
			if (feld[y] > feld[y + 1]) {
				fertig = false;
				temp = feld[y];
				feld[y] = feld[y + 1];
				feld[y + 1] = temp;
				cout << "Tausche " << feld[y + 1] << " mit " << feld[y] << endl;
			}
		}
		if (fertig) break;
	}


	cout << "Fertig!" << endl;
	for (int i = 0; i < feltGreoesse; i++) {
		cout << "Wehrt " << i + 1 << " = " << feld[i] << endl;
	}
	_getch();
	exit(0);
}
*/

void main()
{
	const int feltGreoesse = 5;
	int feld[feltGreoesse];
	int temp;
	bool fertig = true;

	for (int i = 0; i < feltGreoesse; i++) {
		cout << "Wehrt " << i + 1 << " = ";
		cin >> feld[i];
	}
	cout << "SOTIERE ..." << endl;
	for (int x = 0; x < feltGreoesse; x++) {
		fertig = true;
		for (int y = 0; y < feltGreoesse - 1 - x; y++) {
			if (feld[y] > feld[y + 1]) {
				fertig = false;

				temp = feld[y];
				feld[y] = feld[y + 1];
				feld[y + 1] = temp;
				cout << "Tausche " << feld[y + 1] << " mit " << feld[y] << endl;
			}
		}
		if (fertig) break;
	}


	cout << "Fertig!" << endl;
	for (int i = 0; i < feltGreoesse; i++) {
		cout << "Wehrt " << i + 1 << " = " << feld[i] << endl;
	}
	_getch();
	exit(0);
}