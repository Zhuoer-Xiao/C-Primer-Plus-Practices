#include <iostream>
using namespace std;

int main() {
	const int tran = 12;
	int height = 0;
	cout << "Enter your height(inch) : ____\b\b\b\b";
	cin >> height;
	cout << endl;
	cout << "foot : " << height / tran << "  inch : " << height % 12;
	return 0;
}