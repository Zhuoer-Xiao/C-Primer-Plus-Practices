#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char fn[20], ln[20];
	char bt[] = ", ";
	cout << "Enter your first name? ";
	cin.getline(fn, 20);
	cout << "\n";
	cout << "Enter your last name? ";
	cin.getline(ln, 20);
	cout << "\n";
	strcat_s(ln, bt);
	strcat_s(ln, fn);
	cout << "Here's the information in a single string: " << ln;
	return 0;
}