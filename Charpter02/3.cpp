#include <iostream>
using namespace std;

void print01();
void print02();

int main() {
	print01();
	print01();
	print02();
	print02();
	return 0;
}

void print01() {
	cout << "Three blind mice" << endl;
}
void print02() {
	cout << "See how they run" << endl;
}