/*
Projeckt - scanf - printf
Name - KeksGauner
Klasse - TAI11
Datum - 22.10.2020

¦¦¦¦¦¦+  ¦¦¦¦¦+ ¦¦+   ¦¦+¦¦+
¦¦+--¦¦+¦¦+--¦¦+¦¦¦   ¦¦¦¦¦¦
¦¦¦¦¦¦++¦¦¦¦¦¦¦¦¦¦¦   ¦¦¦¦¦¦
¦¦+---+ ¦¦+--¦¦¦¦¦¦   ¦¦¦¦¦¦
¦¦¦     ¦¦¦  ¦¦¦+¦¦¦¦¦¦++¦¦¦¦¦¦¦+
+-+     +-+  +-+ +-----+ +------+

*/

#include <conio.h>
#include <stdio.h>


void main()
{
	char a, b, c;

	printf("Bitte geben Sie das erste Zeichen ein: ");
	scanf("%c", &a);
	fflush(stdin);

	printf("Bitte geben Sie das zweite Zeichen ein: ");
	scanf("%c", &b);
	fflush(stdin);

	printf("Bitte geben Sie das dritte Zeichen ein: ");
	scanf("%c", &c);
	fflush(stdin);

	printf("Sie gaben: %c %c %c ein!", a, b, c);

	getch();
}


