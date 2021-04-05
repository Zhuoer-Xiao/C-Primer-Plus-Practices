#include <iostream>
using namespace std;

int main() {
	int num1, num2, sum = 0;
	cout << "Enter num 1 : ";
	cin >> num1;
	cout << "\nEnter num 2 : ";
	cin >> num2;
	for (int i = num1; i <= num2; i++) {
		sum += i;
	}
	cout << "\nsum : " << sum;
	return 0;
}