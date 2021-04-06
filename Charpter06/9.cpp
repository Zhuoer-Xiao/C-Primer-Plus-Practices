#include <iostream>
#include <fstream>
#include <cstdlib>
const int SIZE = 60;

struct Patrons
{
	char name[20];
	double money;
};
int main()
{
	using namespace std;
	char filename[SIZE];
	ifstream inFile;
	cout << "Please enter filename: ";
	cin.getline(filename, SIZE);
	inFile.open(filename);
	if (!inFile.is_open())
	{
		cout << "Could not open the file: " << filename << endl;
		cout << "Program terminating.\n";
		exit(EXIT_FAILURE);
	}
	int num;
	inFile >> num;
	inFile.get();
	Patrons* p = new Patrons[num];
	for (int i = 0; i < num && inFile.good(); i++)
	{
		inFile.getline(p[i].name, 20);
		inFile >> p[i].money;
		inFile.get();
	}
	cout << "Grand Patrons\n";
	int count1 = 0;
	for (int i = 0; i < num; i++)
	{
		if (p[i].money > 1000)
		{
			cout << p[i].name << ":\t" << p[i].money << endl;
			count1++;
		}
	}
	if (count1 == 0)
		cout << "none\n";
	cout << "Patrons\n";
	int count2 = 0;
	for (int i = 0; i < num; i++)
	{
		if (p[i].money <= 1000)
		{
			cout << p[i].name << ":\t" << p[i].money << endl;
			count2++;
		}
	}
	if (count2 == 0)
		cout << "none\n";
	delete[] p;
	inFile.close();
	return 0;
}
