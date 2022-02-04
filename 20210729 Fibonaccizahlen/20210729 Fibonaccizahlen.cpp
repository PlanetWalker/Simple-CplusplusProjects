// 20210729 Fibonaccizahlen.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "mutterschiff.h"

void setMonate(int *);
int interativ(int);
int rekursiv(int);

void main()
{
	int monate;
	setMonate(&monate);
	cout << "Interativ - Nach " << monate << " Monate sind es " << interativ(monate) << " Hasen und " << interativ(monate) / 2 << " Paare!" << endl;
	cout << "Rekursiv - Nach " << monate << " Monate sind es " << rekursiv(monate) << " Hasen und " << rekursiv(monate) / 2 << " Paare!" << endl;
	_getch();
	exit(42);
}

void setMonate(int *monate) {
	cout << "Wie viele Monate haben die Hasen Zeit? ";
	cin >> *monate;
}

int interativ(int monate) {
	int temp = 0;
	for (int i = 0; i <= monate + 1; i++) {
		temp = temp + monate - i;
	}
	return temp;
}

int rekursiv(int monate) {
	if (monate > 1)
		return monate + rekursiv(monate - 1);
	else
		return 0;
}
