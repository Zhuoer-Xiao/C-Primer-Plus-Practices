#include <iostream>
using namespace std;


int main() {
	double Daphne = 100, Cleo = 100, Cleo_rate = 1.05;
	int i;
	for (i = 1; Cleo <= Daphne; ++i) {
		Daphne += 10;
		Cleo *= Cleo_rate;
	}
	cout << "Daphne : " << Daphne << endl << "Cleo : " << Cleo << endl << "Year : " << i;
}