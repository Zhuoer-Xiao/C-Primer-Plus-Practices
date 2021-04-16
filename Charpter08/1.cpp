#include <iostream>
#include <string>
using namespace std;

void printString(string& str, int n = 0) {
	static int flag = 0;
	flag++;
	if (n == 0) {
		cout << str << endl;
	}
	else {
		for (int i = 0; i < flag; i++) {
			cout << str << endl;
		}
	}
	cout << endl;
}

int main() {
	string str = "Hello World";
	printString(str);
	printString(str, 1);
	printString(str, 1);
	printString(str);
	return 0;
}