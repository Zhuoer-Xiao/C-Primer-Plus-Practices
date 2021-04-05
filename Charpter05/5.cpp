#include <iostream>
#include <string>
using namespace std;
const int arrSize = 101;

int main() {
	string months[12] = {
		"Jan","Feb","Mar","Apr","May","June","July","Aug","Sep","Oct","Nov","Dec"
	};
	int sum = 0, num[12];
	int i;
	for (i = 0; i < 12; ++i) {
		cout << "Enter num in " << months[i] << " : ";
		cin >> num[i];
		cout << endl;
	}
	for (i = 0; i < 12; ++i)sum += num[i];
	cout << "Sum : " << sum;
}