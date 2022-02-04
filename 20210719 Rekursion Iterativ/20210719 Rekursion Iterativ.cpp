// 20210719 Rekursion Iterativ.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "unwichtig.h"
#include "ist.h"
//		  das
#include "system.h"


int main()
{	
	textcolor(2);
	int i;
	typewriter("N.a.a.a.?. .W.i.e. .o.f.t. .s.o.l.l. .i.c.h. .e.s. .\".W.I.E.D.E.R.H.O.L.E.N.!.?.\".:. .");
	cin >> i;

	// 1
	textcolor(12);
	rekursion(0, i);

	cout << endl;

	// 2
	textcolor(4);
	interativ(i);

	
	_getch();
	return 0;
}

void rekursion(int wiederholen, int ende) {
	if (wiederholen <= ende) {
		typewriter(".N.u.m.m.e.r.:. ." + to_string(wiederholen) + ". .s.a.g.t. .\".R.e.k.r.u.s.i.v. .H.E.L..L.O!.\". \n");
		//cout << "Nummer: " << wiederholen << " sagt \"Rekrusiv HELLO!\"" << endl;
		rekursion(wiederholen + 1, ende);
	}
}

void interativ(int wiederholen) {
	for (int i = 0; i <= wiederholen; i++) {
		typewriter(".N.u.m.m.e.r.:. ." + to_string(i) + ". .s.a.g.t. .\".I.n.t.e.r.a.t.i.v. .H.E.L.L.O.!.\". \n");
		//cout << "Nummer: " << i << " sagt \"Interativ HELLO!\"" << endl;
	}
}