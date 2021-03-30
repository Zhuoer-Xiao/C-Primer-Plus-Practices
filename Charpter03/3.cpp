#include <iostream>
using namespace std;

int main() {
	const int tran = 60;
	double degrees = 0, minutes = 0;
	double seconds = 0;
	cout << "Enter a latitude in degrees, minutes, and seconds : " << endl;
	cout << "First, enter the degrees : ";
	cin >> degrees;
	cout << endl;
	cout << "Next, enter the minutes of arc : ";
	cin >> minutes;
	cout << endl;
	cout << "Finally, enter the seconds of arc : ";
	cin >> seconds;
	cout << endl;
	cout << degrees << " degrees, " << minutes << " minutes, " << seconds << " seconds = " << degrees + (minutes / 60) + (seconds / 3600);
	return 0;
}