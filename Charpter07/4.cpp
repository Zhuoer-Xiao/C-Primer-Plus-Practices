#include <iostream>
using namespace std;

long double probability(unsigned int numbers, unsigned int picks)
{
    long double result = 1.0;
    long double n;
    unsigned int p;
    for (n = numbers, p = picks; p > 0; n--, p--)
        result = result * n / p;
    return result;
}

int main()
{
    double field_number = 47, field_pick = 5;
    double special_number = 27, special_pick = 1;
    cout << "You have one chance in "
        << probability(field_number, field_pick) * probability(special_number, special_pick)
        << " of winning." << endl;
    return 0;
}