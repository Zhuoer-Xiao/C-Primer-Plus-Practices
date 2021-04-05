#include <iostream>
using namespace std;
const int arrSize = 101;

int main() {
	double sum = 0, i;
	for (;;) {
		int num;
		cout << "Enter a num,enter 0 to end" << endl;
		cin >> num;
		if (num == 0) {
			break;
		}
		sum += num;
		cout << "\nSum : " << sum << endl;
	}
}