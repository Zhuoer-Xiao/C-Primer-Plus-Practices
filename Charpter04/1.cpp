#include <iostream>
#include <string>
using namespace std;

int main() {
	string fn, ln;
	char Grade;
	int age;
	cout << "What is your first name? ";
	getline(cin, fn);
	cout << endl;
	cout << "What is your last name? ";
	getline(cin, ln);
	cout << endl;
	cout << "What letter grade do you deserve? ";
	cin >> Grade;
	cout << endl;
	cout << "What is your age? ";
	cin >> age;
	cout << endl;
	cout << "Name: " << ln << ", " << fn << endl;
	cout << "Grade: " << char(Grade + 1) << endl << "Age: " << age;
	return 0;
}