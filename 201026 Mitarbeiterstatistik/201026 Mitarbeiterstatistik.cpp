/*
Projeckt - Miarbeiterstartistik
Name - KeksGauner
Klasse - TAI11
Datum - 26.10.2020
*/

#include <stdio.h>
#include <conio.h>
using namespace std;

void main()
{	
	int gehaltsklasse1, gehaltsklasse2;
	float brutto1, brutto2
		, praemie1, praemie2;
	char name1[80], vorname1[80]
		, name2[80], vorname2[80];


	printf("\n"); // ------------------------------------------------------------------------

	printf("1. Miarbeiter (Vorname Nachname): ");
	scanf("%s %s", &vorname1, &name1);
	fflush(stdin);

	printf("1. Gehaltsklasse: ");
	scanf("%i", &gehaltsklasse1);
	fflush(stdin);

	printf("1. Brotto: ");
	scanf("%f", &brutto1);
	fflush(stdin);

	printf("\n"); // ------------------------------------------------------------------------

	printf("2. Miarbeiter (Vorname Nachname): ");
	scanf("%s %s", &vorname2, &name2);
	fflush(stdin);

	printf("2. Gehaltsklasse: ");
	scanf("%i", &gehaltsklasse2);
	fflush(stdin);

	printf("2. Brotto: ");
	scanf("%f", &brutto2);
	fflush(stdin);

	printf("\n"); // ------------------------------------------------------------------------


	praemie1 = brutto1 * (20 / 100);
	praemie2 = brutto2 * (20 / 100);

	printf("\n"); // ------------------------------------------------------------------------


	printf("%10s %13s %17s %12s\n", "Mitarbeiter", "Gehaltsklasse", "Bruttogehalt EUR", "Praemie EUR");
	printf("________________________________________________________________________________\n");
	printf("%0s %5s %13i %16.2f %16.2f\n", vorname1, name1, gehaltsklasse1, brutto1, praemie1);
	printf("%0s %5s %13i %16.2f %16.2f\n", vorname2, name2, gehaltsklasse2, brutto2, praemie2);

	printf("Zum Beeenden eine Taste drueken!");

	getch();
}

