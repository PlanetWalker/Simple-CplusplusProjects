// 20210708 fprintf fscanf.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdafx.h"
using namespace std;

void size(FILE *datenzeiger) {
	// Größe
	long size = ftell(datenzeiger);
	printf("Ich bin bei: %ld bytes\n", size);
}

/*
void main()
{
	setlocale(LC_ALL, "de");
	FILE* datenzeiger;

	// OPEN
	datenzeiger = fopen("C:\\TEST\\datei.dat", "w+");
	if (datenzeiger == NULL) { printf("File error"); exit(1); }

	// SCHREIBEN
	//size(datenzeiger); // 0 bytes
	fprintf(datenzeiger, "%s\n", "Ich bin ein MENSCH!");
	//size(datenzeiger); // 21 bytes

	// SETZEN
	fseek(datenzeiger, 0, SEEK_SET);
	//size(datenzeiger); // 0 bytes
	/*
	* Constant	Reference position
	* SEEK_SET	Beginning of file
	* SEEK_CUR	Current position of the file pointer
	* SEEK_END	End of file *
	*\/
	

	// LESEN
	char s[100];
	int state = 0;
	while (state != EOF) {
		//size(datenzeiger); // 4 bytes || 8 bytes || 12 bytes || 21 bytes
		state = fscanf(datenzeiger, "%s\n", &s);
		//if (state != EOF)
		printf("%s ", s);
	}

	// SCHLIE?EN
	fclose(datenzeiger);

	_getch();
	exit(0);
}
*/

void main()
{
	setlocale(LC_ALL, "de");
	FILE* datenzeiger;
	int feld = 2;

	// OPEN
	datenzeiger = fopen("C:\\TEST\\datei.dat", "w");
	if (datenzeiger == NULL) { printf("File error"); exit(1); }

	// SCHREIBEN
	fwrite(&feld, sizeof(int), sizeof(feld), datenzeiger);

	// SETZEN
	//fseek(datenzeiger, 0, SEEK_SET);


	// SCHLIE?EN
	fclose(datenzeiger);

	// OPEN
	datenzeiger = fopen("C:\\TEST\\datei.dat", "r");
	if (datenzeiger == NULL) { printf("File error"); exit(1); }

	// LESEN
	int s = 1;
	while (!feof(datenzeiger)) {
	
		printf("%d", s);
		fread(&s, sizeof(int), sizeof(s), datenzeiger);
	}
	
	// SCHLIE?EN
	fclose(datenzeiger);

	_getch();
	exit(0);
	}