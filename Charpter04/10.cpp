#include <iostream>
#include <string>
#include <array>
using namespace std;

int main() {
	float ave = 0;
	array<float, 3>time;
	for (int i = 0; i < 3; i++) {
		cout << i + 1 << " : ";
		cin >> time[i];
		ave += time[i] / 3;
		cout << "\n";
	}
	cout << "average : " << ave;
	return 0;
}