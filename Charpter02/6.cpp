#include <iostream>
using namespace std;

double translator(double);

int main() {
	int light = 0;
	cout << "Enter the number of light year : ";
	cin >> light;
	cout << endl << light << " light year =  " << translator(light) << " astronomical units";
	return 0;
}

double translator(double l) {
	return l * 63240;
}