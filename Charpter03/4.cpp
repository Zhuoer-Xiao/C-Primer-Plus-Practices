#include <iostream>
using namespace std;

int main() {
	const int hour_d = 24;
	const int minutes_h = 60;
	const int seconds_m = 60;
	long seconds = 0;
	cout << "Enter the number of seconds : ";
	cin >> seconds;
	cout << endl;
	int days = seconds / (hour_d * minutes_h * seconds_m);
	seconds = seconds - (days * (hour_d * minutes_h * seconds_m));
	int hours = seconds / (minutes_h * seconds_m);
	seconds = seconds - (hours * (minutes_h * seconds_m));
	int minutes = seconds / seconds_m;
	seconds = seconds - minutes * seconds_m;
	cout << seconds << " seconds= " << days << " days, " << hours << " hours, " << minutes << " minutes, " << seconds << " seconds";
	return 0;
}