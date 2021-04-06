#include <iostream>
using namespace std;
struct Patrons
{
	char name[20];
	double money;
};
int main()
{
	cout << "Enter the number of patrons: ";
	int num;
	cin >> num;
	cin.get();
	Patrons* p = new Patrons[num];
	for (int i = 0; i < num; i++)
	{
		cout << i + 1 << " patron's name: ";
		cin.get(p[i].name, 20);
		cout << "Money: ";
		cin >> p[i].money;
		cin.get();
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
	return 0;
}