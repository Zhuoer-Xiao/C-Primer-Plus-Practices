#include <iostream>
using namespace std;

void translator(int, int);

int main() {
	int hour = 0, minute = 0;
	cout << "Enter the number of hours : ";
	cin >> hour;
	cout << "Enter the number of minutes : ";
	cin >> minute;
	translator(hour, minute);
	return 0;
}

void translator(int hour, int minute) {
	cout << "Time : " << hour << " : " << minute;
}