#include <iostream>
using namespace std;

int main()
{
	int anzahlStifte, betrag;
	double preisStift = 1.2;		//Kommazahlen werden mit einem Punkt, nicht mit einem Komma aufgeschrieben.
	cout << "Wie viele Stifte wollen Sie kaufen?" << endl;
	cin >> anzahlStifte;

	if (anzahlStifte < 100)
	{
		betrag = anzahlStifte * preisStift;				// Kein Rabatt, da Anzahl unter 100 (0-99) ist.
	}
	else if (anzahlStifte < 300)
	{
		betrag = anzahlStifte * preisStift * 0.9;		// 10% Rabatt, da Anzahl über 99 und unter 300 (100-299) ist.
	}
	else
	{
		betrag = anzahlStifte * preisStift * 0.8;		// 20% Rabatt, da Wert über 100 und 300 ist.
	}
	cout << "Der Preis fuer die gewuenschten " << anzahlStifte << " Stifte betraegt " << betrag << " Euro." << endl;
	system("pause");
	return 0;
}