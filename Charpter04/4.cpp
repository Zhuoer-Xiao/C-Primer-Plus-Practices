#include <iostream>
#include <string>
using namespace std;

int main() {
	string fn, ln;
	char bt[] = ", ";
	cout << "Enter your first name? ";
	getline(cin, fn);
	cout << "\n";
	cout << "Enter your last name? ";
	getline(cin, ln);
	cout << "\n";
	ln.append(", ").append(fn);
	cout << "Here's the information in a single string: " << ln;
	return 0;
}