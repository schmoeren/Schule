#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> zahlen;
	int input = 0;
	cout << "Gib Zahlen ein\n";
	
	do
	{
		cin >> input;
		if (input != 0)
			zahlen.push_back(input);

	} while (input != 0);

	//Durchschnitt berechnen
	double summe = 0.0;
	for (int i = 0; i < zahlen.size(); i++)
	{
		summe += zahlen[i];
	}
	cout << "Der Durchschnitt betraegt: " << summe / zahlen.size() << endl;

	system("pause");
	return 0;
}
