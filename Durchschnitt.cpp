#include <iostream>
using namespace std;		//Damit muss man vor std befehlen kein std:: mehr schreiben, da das Programm den Namespace nun schon kennt

int main()
{
	int zahl1, zahl2, zahl3, zahl4, zahl5;

	cout << "Geben Sie 5 Zahlen an, von welchen Sie den Durchschnitt berechnet haben wollen." << endl;		//Um das Programm Benutzerfreundlicher zu gestalten
	cin >> zahl1;
	cin >> zahl2;
	cin >> zahl3;
	cin >> zahl4;
	cin >> zahl5;
	cout << "Der Durchschnitt Ihrer eingegeben Zahlen betraegt: " << (zahl1 + zahl2 + zahl3 + zahl4 + zahl5) / 5 << endl;
	// ^ Alle 5 Zahlen werden in der Klamme summiert um danach durch 5, also der Anzahl, geteilt zu werden.

	system("pause");
	return 0;
}