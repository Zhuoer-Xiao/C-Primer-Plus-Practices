#include <iostream>
#include <cstring>
using namespace std;

template <typename T>
T maxn(T arr[5], int n) {
	T max = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	return max;
}

int main() {
	double arr1[4] = { 1.3,1.8,2.7,0.4 };
	cout << maxn(arr1, 4) << endl;
	int arr2[6] = { 7,4,7,5,1,10 };
	cout << maxn(arr2, 6) << endl;
}