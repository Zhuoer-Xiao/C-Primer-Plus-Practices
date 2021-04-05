#include <iostream>
#include <string>
using namespace std;

int main()
{
	int num;
	cout << "Enter number of rows: ";
	cin >> num;
	for (int i = 0; i < num; i++) {
		for (int j = 5 - i - 1; j > 0; j--) {
			cout << ".";
		}
		for (int k = 0; k <= i; k++) {
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}