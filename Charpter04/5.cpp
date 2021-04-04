#include <iostream>
#include <string>
using namespace std;

typedef struct CandyBar {
	string brand;
	double price;
	int calorie;
}CandyBar;

int main() {
	CandyBar snack = { "Mocha Munch",2.3,350 };
	cout << "Brand: " << snack.brand << " Price: " << snack.price << " Calorie:" << snack.calorie;
}