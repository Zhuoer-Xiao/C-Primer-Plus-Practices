#include <iostream>
using namespace std;

int main() {
	long long population;
	long long population_us;
	cout << "Enter the world's population : ";
	cin >> population;
	cout << endl;
	cout << "Enter the population of the US : ";
	cin >> population_us;
	cout << endl;
	long double rate = (long double)population_us / population;
	cout << "The population of the US is " << rate * 100 << "% of the world population.";
	return 0;
}