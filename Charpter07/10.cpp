#include <iostream>
using namespace std;

double add(double x, double y)
{
    return x + y;
}

double subtract(double x, double y)
{
    return x - y;
}

double multiply(double x, double y)
{
    return x * y;
}

double calculate(double x, double y, double (*func)(double, double))
{
    return (*func)(x, y);
}

int main()
{
    double x, y;
    double (*pf[3])(double, double) = { add, subtract, multiply };
    cout << "Enter two numbers: ";
    while (cin >> x >> y)
    {
        for (int i = 0; i < 3; i++)
        {
            cout << "The result " << i + 1 << " is : " << calculate(x, y, pf[i]) << endl;
        }
        cout << "Next two numbers(q to quit): ";
    }
    return 0;
}


