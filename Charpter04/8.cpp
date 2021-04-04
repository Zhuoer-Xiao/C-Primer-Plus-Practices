#include <iostream>
#include <string>
using namespace std;

typedef struct pizza {
	char company[50];
	double diameter;
	double weight;
}pizza;

int main() {
	pizza* p1 = new pizza;
	cout << "Company : ";
	cin.getline(p1->company, 50);
	cout << "\nDiameter : ";
	cin >> p1->diameter;
	cout << "\nWeight : ";
	cin >> p1->weight;
	cout << "\nBrand: " << p1->company << "\tPrice: " << p1->diameter << "\tCalorie:" << p1->weight << endl;
	return 0;
}