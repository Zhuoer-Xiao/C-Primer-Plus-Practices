#include <iostream>
using namespace std;

double translator(int);

int main() {
	int Celsius = 0;
	cout << "Please enter a Celsius value : ";
	cin >> Celsius;
	cout << endl << Celsius << " degrees Celsius is " << translator(Celsius) << " degrees Fahrenheit";
	return 0;
}

double translator(int C) {
	return C * 1.8 + 32.0;
}