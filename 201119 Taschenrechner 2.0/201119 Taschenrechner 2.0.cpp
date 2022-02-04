/*
Projekt - Taschenrechnehr 2.0
Name - KeksGauner
Klasse - TAI11
Datum - 19.11.2020
*/

// Nicht beendet

#include <iostream>
#include <conio.h>
#include <windows.h> // Für die Farbe

using namespace std;
WORD textcolor(WORD color) { return SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color); } // 10 Gruen // 12 Rot // 7 Normal // 11 zyan




void main()
{
//	cout << endl
//	    << "###############################################################################" << endl
//		<< "# *******                   **                                 ****      **** #" << endl
//		<< "#/**////**                 /**                                */// *    *///**#" << endl
//		<< "#/**   /**   *****   ***** /**      *******   *****  ******  /    /*   /*  */*#" << endl
//		<< "#/*******   **///** **///**/****** //**///** **///**//**//*     ***    /* * /*#" << endl
//		<< "#/**///**  /*******/**  // /**///** /**  /**/******* /** /     *//     /**  /*#" << endl
//		<< "#/**  //** /**//// /**   **/**  /** /**  /**/**////  /**      *      **/*   /*#" << endl
//		<< "#/**   //**//******//***** /**  /** ***  /**//******/***     /******/** / ****#" << endl
//		<< "#//     //  //////  /////  //   // ///   //  ////// ///      ////// //  ////  #" << endl
//		<< "###############################################################################" << endl << endl;

	cout << endl;
	textcolor(4);
	cout << "###############################################################################" << endl << "#";
	textcolor(3);
	cout << " *******                   **                                 ****      **** ";
	textcolor(4);
	cout << "#" << endl << "#";
	textcolor(3);
	cout << "/**////**                 /**                                */// *    *///**";
	textcolor(4);
	cout << "#" << endl << "#";
	textcolor(3);
	cout << "/**   /**   *****   ***** /**      *******   *****  ******  /    /*   /*  */*";
	textcolor(4);
	cout << "#" << endl << "#";
	textcolor(3);
	cout << "/*******   **///** **///**/****** //**///** **///**//**//*     ***    /* * /*";
	textcolor(4);
	cout << "#" << endl << "#";
	textcolor(3);
	cout << "/**///**  /*******/**  // /**///** /**  /**/******* /** /     *//     /**  /*";
	textcolor(4);
	cout << "#" << endl << "#";
	textcolor(3);
	cout << "/**  //** /**//// /**   **/**  /** /**  /**/**////  /**      *      **/*   /*";
	textcolor(4);
	cout << "#" << endl << "#";
	textcolor(3);
	cout << "/**   //**//******//***** /**  /** ***  /**//******/***     /******/** / ****";
	textcolor(4);
	cout << "#" << endl << "#";
	textcolor(3);
	cout << "//     //  //////  /////  //   // ///   //  ////// ///      ////// //  ////  ";
	textcolor(4);
	cout << "#" << endl;
	cout << "###############################################################################" << endl << endl;

	textcolor(10);
	char rechenzeichen;
	double zahl1, zahl2, erg;
	cout << "Bitte geben Sie die erste Zahl ein: ";
	cin >> (double)zahl1;
	cout << "Bitte geben Sie die zweite Zahl ein: ";
	cin >> (double)zahl2;
	cout << "Rechenzeichen(+;-;*;/): ";
	cin >> (char)rechenzeichen;

	textcolor(7);
	cout << endl << "###############################################################################" << endl;
	textcolor(11);
	switch (rechenzeichen)
	{
	case '+':
	{
				erg = zahl1 + zahl2;
				cout << zahl1 << " " << rechenzeichen << " " << zahl2 << " = " << erg;
				break;
	}
	case '-':
	{
				erg = zahl1 - zahl2;
				cout << zahl1 << " " << rechenzeichen << " " << zahl2 << " = " << erg;
				break;
	}
	case '*':
	{
				erg = zahl1 * zahl2;
				cout << zahl1 << " " << rechenzeichen << " " << zahl2 << " = " << erg;
				break;
	}
	case '/':
	{
				if (zahl1 == 0 || zahl2 == 0) {
					textcolor(12);
					cout << zahl1 << " / " << zahl2 << " geht nicht!"; 
					break; 
				}
				erg = zahl1 / zahl2;
				cout << zahl1 << " " << rechenzeichen << " " << zahl2 << " = " << erg;
				break;
	}
	default: {
				 textcolor(12);
				 cout << "Das Rechenzeichen: " << rechenzeichen << " gibt es nicht!";
				 break;
	}

	}

	textcolor(7);
	cout << endl << "###############################################################################" << endl;

	textcolor(11);
	cout << endl << "Zum Beenden druecken Sie eine Taste!";
	_getch();
}
