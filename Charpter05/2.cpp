#include <iostream>
#include <array>
using namespace std;
const int arrSize = 101;

int main() {
	array<long double, arrSize> arr;
	arr[1] = arr[0] = 1;
	for (int i = 2; i < arrSize; ++i) {
		arr[i] = i * arr[i - 1];
	}
	for (int i = 0; i < arrSize; ++i) {
		cout << i << "! = " << arr[i] << endl;
	}
	return 0;
}
