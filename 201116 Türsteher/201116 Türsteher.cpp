/*
Projeckt - Tührsteher
Name - KeksGauner
Klasse - TAI11
Datum - 16.11.2020
*/

#include <iostream>
#include <conio.h>
using namespace std;

void intro();void abfrage();void outro();

void main()
{

	intro();
	abfrage();

	outro();



	getch();
}

void intro() {
	cout << "Der Tuersteher" << endl << endl;

}
void outro() {
	cout << endl << endl << "Duecken Sie eine Taste zum beenden!";


}
void abfrage() {

	char hunger[30], drurst[30], geld[30];

	cout << "Haben Sie Hunger? ";
	cin >> hunger;
	cout << "Haben Sie Durst? ";
	cin >> drurst;
	cout << "Haben Sie Geld? ";
	cin >> geld;


	if (
		((string)hunger == "ja" ||(string)hunger == "j") 
		|| 
		((string)drurst == "ja" || (string)drurst == "j")
		&& 
		((string)geld == "ja" || (string)geld == "j")
		)
	{
		cout << endl << "######################" << endl;
		cout << "Herzlich willkommen!";
		cout << endl << "######################";
	}
	else {
		cout << endl << "######################" << endl;
		cout << "Zugriff verweigert!";
		cout << endl << "######################";
	}


}