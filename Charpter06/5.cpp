#include <iostream>
using namespace std;

int main()
{
	cout << "Enter the income: ";
	int m;
	while (cin >> m && m >= 0 && isdigit(m))
	{
		double t = 0.0;
		if (m > 5000 && m <= 15000)
			t = (m - 5000) * 0.1;
		else if (m > 15000 && m <= 35000)
			t = 10000 * 0.1 + (m - 15000) * 0.15;
		else if (m > 35000)
			t = 10000 * 0.1 + 20000 * 0.15 + (m - 35000) * 0.2;
		cout << "The income tax is: " << t <<" tvarps"<< endl;
		cout << "The next: ";
	}
	return 0;
}