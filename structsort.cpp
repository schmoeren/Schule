#include <iostream>
#include <vector>
using namespace std;
struct basketball
{
	string name;
	int jersey;
};

int main()
{
	bool swapped = true;
	vector<basketball> meinTeam;
	basketball spieler1{"Lebron", 34};
	basketball spieler2{"Kyle", 23};
	basketball spieler3{"Bamba", 65};
	basketball spieler4{"Scottie", 8};
	basketball spieler5{"Charles", 5};
	basketball spieler6{"Harrison", 59};
	meinTeam.push_back(spieler1);
	meinTeam.push_back(spieler2);
	meinTeam.push_back(spieler3);
	meinTeam.push_back(spieler4);
	meinTeam.push_back(spieler5);
	meinTeam.push_back(spieler6);

	while (swapped)
	{
		swapped = false;
		for (int i = 0; i < meinTeam.size()-1; i++)
		{
			if (meinTeam[i].jersey > meinTeam[i + 1].jersey)
			{
				int temp = meinTeam[i].jersey;
				meinTeam[i].jersey = meinTeam[i + 1].jersey;
				meinTeam[i + 1].jersey = temp;
				swapped = true;
			}
		}
	}

	for (int i = 0; i < meinTeam.size(); i++)
	{
		cout << meinTeam[i].name << " jersey number: " << meinTeam[i].jersey << endl;
	}

	system("pause");
	return 0;
}