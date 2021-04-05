#include <iostream>
#include <string>
using namespace std;

typedef struct car {
	string name;
	int year;
}car;

int main() {
	int num;
	cout << "How many cars do you wish to catalog? ";
	cin >> num;
	cin.get();
	car* Car = new car[num];
	for (int i = 0; i < num; ++i) {
		cout << "Car #" << i + 1 << ":" << endl;
		cout << "Please enter the make: ";
		getline(cin, Car[i].name);
		cout << "\nPlease enter the year made: ";
		cin >> Car[i].year;
		cin.get();
	}
	cout << "\nHere is your collection: ";
	for (int i = 0; i < num; ++i) {
		cout << Car[i].year << " " << Car[i].name;
	}
}