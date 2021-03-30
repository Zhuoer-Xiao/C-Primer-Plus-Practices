#include <iostream>
using namespace std;


int main() {
	const double tran_h = 0.0254;
	const double tran_w = 2.2;
	const int tran = 12;
	double foot = 0, inch = 0;
	double pound = 0;
	cout << "Enter your height(foot) : ";
	cin >> foot;
	cout << endl;
	cout << "Enter your height(inch) : ";
	cin >> inch;
	cout << endl;
	cout << "Enter your weight(pound) : ";
	cin >> pound;
	cout << endl;
	cout << "BMI : " << (pound / tran_w) / (((foot * tran + inch) * tran_h) * ((foot * tran + inch) * tran_h));
	return 0;
}