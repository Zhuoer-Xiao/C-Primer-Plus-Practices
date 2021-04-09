#include <iostream>
using namespace std;

long double factorials(int number)
{
    if (number == 0) {
        return 1;
    }
    else {
        return factorials(number - 1) * number;
    }
}

int main()
{
    int n;
    cout << "Enter a number(q to quit): ";
    while (cin >> n)
    {
        cout << n << "! = " << factorials(n) << endl;
        cout << "Next number(q to quit): ";
    }
    return 0;
}