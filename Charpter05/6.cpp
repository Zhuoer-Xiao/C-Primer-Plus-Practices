#include <iostream>
#include <string>
using namespace std;
const int arrSize = 101;

int main() {
	string months[12] = {
		"Jan","Feb","Mar","Apr","May","June","July","Aug","Sep","Oct","Nov","Dec"
	};
	int sum = 0, num[3][12];
	int i, j;
	for (j = 0; j < 3; ++j) {
		for (i = 0; i < 12; ++i) {
			cout << "Enter num in " << months[i] << " year " << j + 1 << " : ";
			cin >> num[j][i];
			cout << endl;
		}
	}
	for (j = 0; j < 3; ++j) {
		for (i = 0; i < 12; ++i)sum += num[j][i];
	}

	cout << "Sum : " << sum;
}