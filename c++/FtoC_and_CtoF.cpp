#include <iostream>
using namespace std;

int main()
{
	int c, f, e;
	cout << "Moechten Sie einen Fahrenheit- oder Celsiuswert umwandeln? 1 fuer Fahrenheit in Celsius und 2 fuer Celsius in Fahrenheit" << endl;
	cin >> e;

	switch (e)			//switch(case) darf nur ein char oder ein int sein
	{
	case(1): 
		cout << "Geben Sie den Fahrenheitwert an, welcher umgewandelt werden soll." << endl;
		cin >> f;
		cout << "Der umgewandelte Wert betraegt " << (f - 32) / 1.8 << "C Celsius." << endl;
		break;			//Sobald ein case eintritt wird mit break die weitere abfrage des switches gestoppt. Sobald e=1 ist, wird die abfrage ab 1 gestoppt, 
					//heisst: case2 und default werden nicht angesprochen = ressourcensparender
	case(2):
		cout << "Geben Sie den Celsiuswert an, welcher umgewandelt werden soll." << endl;
		cin >> c;
		cout << "Der umgewandelte Wert betraegt " << (c * 1.8) + 32 << "F Fahrenheit." << endl;
		break;
	default:
		cout << "Eingabe ungueltig." << endl;
	}

	system("pause");
	return 0;
}
