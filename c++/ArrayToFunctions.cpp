#include <iostream>
using namespace std;

double averageArray(int*, int);
int* minMaxArray(int*, int);
double variance(int*, int);

int arr[5] = { 2, 8, 7, 1, 5 };
int n = 5;

int main()
{
	int* minMax;
	minMax = minMaxArray(arr, n);
	cout << minMax[0] << endl;		//Wenn man Text vor Array hat wie "Min: ", muss der Array in der Funktion zu einem static array umschrieben werden da sonnst der Wert im Ram überschrieben wird und ein anderes Ergebnis rauskommt.
	cout << minMax[1] << endl;
	cout << averageArray(arr, n) << endl;
	cout << "Varianz: " << variance(arr, n) << endl;
	
	return 0;
}
double averageArray(int* a, int n)
{
	double average = 0.0;
	for (int i = 0; i < n; i++)
	{
		average = average + a[i];
	}
	return average / n;
}
int* minMaxArray(int* a, int n)
{
	
	bool swapped = true;
	while (swapped)
	{
		swapped = false;
		for (int i = 0; i < n - 1; i++)
		{
			if (a[i] > a[i + 1])
			{
				double tmp;
				tmp = a[i];
				a[i] = a[i + 1];
				a[i + 1] = tmp;
				swapped = true;
			}
		}
	}
	int minMax[] = {a[0], a[4]};
	return minMax;
}
double variance(int* a, int n)
{
	double average = averageArray(arr, n);
	double var = 0.0;
	for (int i = 0; i < n; i++)
	{
		var = var + ((a[i] - average) * (a[i] - average) / (n - 1));
	}
	return var;
}
