#include <iostream>
#include <string>
using namespace std;

typedef struct CandyBar {
	string brand;
	double price;
	int calorie;
}CandyBar;

int main() {
	CandyBar snack[3] = { { "Mocha Munch",2.3,350 },{"Orio",2.7,400},{"CoCo",1.3,200} };
	int i;
	for (i = 0; i < 3; i++) {
		cout << "Brand: " << snack[i].brand << "\tPrice: " << snack[i].price << "\tCalorie:" << snack[i].calorie << endl;
	}
}