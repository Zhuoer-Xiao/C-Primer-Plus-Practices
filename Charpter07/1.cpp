#include <iostream>
using namespace std;
double Average(double, double);

int main()
{
	double a, b, average;
	cout << "Please enter two number:\n";
	cout << "1 : ";
	cin >> a;
	cin.get();
	cout << "2 : ";
	cin >> b;
	while (a != 0 && b != 0)
	{
		average = Average(a, b);
		cout << "Harmonic average: " << average << endl;
		cout << "Please enter two number:\n";
		cout << "1 : ";
		cin >> a;
		cin.get();
		cout << "2 : ";
		cin >> b;
	}
	cout << "Over!!";
	return 0;
}
double Average(double a, double b)
{
	double average;
	average = 2 * a * b / (a + b);
	return average;
}

