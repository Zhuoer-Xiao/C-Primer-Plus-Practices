#include <iostream>
#include <string>
using namespace std;
struct CandyBar
{
    string brand;
    double weight;
    int heat;
};
void set(CandyBar& x, const char* brand = "Millennium Munch", const double weight = 2.85, const int heat = 350);
void showbar(CandyBar& x);

int main()
{
    CandyBar x0, x1, x2;
    set(x0);
    showbar(x0);
    set(x1, "Critiano Ronaldo", 1.88, 240);
    showbar(x1);
    set(x2, "Sergio Ramos", 3.56, 360);
    showbar(x2);
    return 0;
}

void set(CandyBar& x, const char* brand, const double weight, const int heat)
{
    x.brand = brand;
    x.weight = weight;
    x.heat = heat;
}

void showbar(CandyBar& x)
{
    using namespace std;
    cout << "Brand:\t" << x.brand << endl;
    cout << "Weight:\t" << x.weight << endl;
    cout << "Heat:\t" << x.heat << endl;
}