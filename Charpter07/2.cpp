#include <iostream>
#include <math.h>
using namespace std;

int const maxscore = 10;
int TrueSize = 0;

void SaveGolf(int* golf)
{
	cout << "If you want to end the input, press the letter!" << endl;
	for (int i = 0; i < maxscore; i++)
	{
		cout << "Input the " << i + 1 << " Score!" << endl;
		if (cin >> golf[i])
		{
		}
		else
		{
			TrueSize = i;
			break;
		}
		TrueSize = i;
	}
	cout << "Enter end!" << endl;
}

void ShowGolf(const int* golf)
{
	cout << "Show the golf socre!" << endl;

	for (int i = 0; i < TrueSize; i++)
	{
		cout << golf[i] << '\t';
	}
	cout << endl;
}

void AverageGolf(const int* golf)
{
	int sum = 0;
	for (int i = 0; i < TrueSize; i++)
	{
		sum += golf[i];
	}
	cout << "The score average is : " << sum / TrueSize << "!" << endl;
}

int main()
{
	cout << "Input the score of golf!" << endl;
	int golf[maxscore];
	SaveGolf(golf);
	ShowGolf(golf);
	AverageGolf(golf);

	return 0;
}