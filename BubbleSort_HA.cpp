#include <iostream>
using namespace std;
void bubbleSort(double*, int, bool);
void showArray(double*, int);

int main()
{
	double meinArray[] = { 2.5, 8.8, 6,-99.9 };

	showArray(meinArray, 4);
	cout << endl;
	bubbleSort(meinArray, 4, false);
	showArray(meinArray, 4);
}

void showArray(double* d, int n)
{
	for (int i = 0;i < n;i++)
	{
		cout << d[i] << endl;
	}
}


void bubbleSort(double *d, int n, bool richtung)
{
	//Richtung = true -> kleiner bis groesser, Richtung = false -> groesser bis kleiner
	bool swapped = true;
	if (richtung == true)
	{
		while (swapped)
		{
			swapped = false;
			for (int i = 0;i < n - 1;i++)
			{
				if (d[i] > d[i + 1])
				{
					double tmp;
					tmp = d[i];
					d[i] = d[i + 1];
					d[i + 1] = tmp;
					swapped = true;
				}
			}
		}
		cout << "Ihr Array wurde Vorwaerts sortiert." << endl;
	}
	else
	{
		while (swapped)
		{
			swapped = false;
			for (int i = 0;i < n - 1;i++)
			{
				if (d[i] < d[i + 1])
				{
					double tmp;
					tmp = d[i];
					d[i] = d[i + 1];
					d[i + 1] = tmp;
					swapped = true;
				}
			}
		}
		cout << "Ihr Array wurde Rueckwaerts sortiert." << endl;
	}
}
