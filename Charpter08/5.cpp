#include <iostream>
#include <cstring>
using namespace std;

template <typename T>
T max5(T arr[5]) {
	T max = 0;
	for (int i = 0; i < 5; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	return max;
}

int main() {
	double arr1[5] = { 1.3,1.8,2.7,0.4,1 };
	cout << max5(arr1) << endl;
	int arr2[5] = { 7,4,7,5,1 };
	cout << max5(arr2) << endl;
}