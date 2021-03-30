#include <iostream>
using namespace std;

int main() {
	long long mile;
	long long gallon;
	cout << "Enter the distance : ";
	cin >> mile;
	cout << endl;
	cout << "Enter the gasoline consumption : ";
	cin >> gallon;
	cout << endl;
	cout << mile * 1.0 / gallon << " miles per gallon.";
	return 0;
}