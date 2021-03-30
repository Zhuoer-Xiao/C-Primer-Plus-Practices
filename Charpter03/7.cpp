#include <iostream>
using namespace std;

int main() {
	double consum_eu;
	double consum_us;
	cout << "Enter the consumption(litre/100 kilo) : ";
	cin >> consum_eu;
	cout << endl;
	cout << "the consumption(mile/gallon) : " << 3.875 * 62.14 / consum_eu;
	return 0;
}