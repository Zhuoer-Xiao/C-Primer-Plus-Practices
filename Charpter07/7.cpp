#include <iostream>
using std::cout;
using std::cin;
using std::endl;

const int Max = 5;

double* fill_array(double* Begin, double* End);
void show_array(const double* Begin, const double* End);
void revalue(double* Begin, double* End, double r);

int main()
{
    double properties[Max];
    double* End = fill_array(properties, properties + Max);
    show_array(properties, End);
    if (End != properties)
    {
        cout << "Enter the revaluation factor : ";
        double factor;
        while (!(cin >> factor))
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "Bad input; Please input a number: ";
        }
        revalue(properties, End, factor);
        show_array(properties, End);
    }
    cout << "Done." << endl;
    return 0;
}

double* fill_array(double* Begin, double* End)
{
    double* temp = Begin;
    int i = 0;
    for (; temp != End; temp++)
    {
        cout << "Enter value #" << i + 1 << " : ";
        cin >> *temp;
        if (!cin)
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "Bad input; input process terminated.\n";
            break;
        }
        else if (*temp < 0)
            break;
        i++;
    }
    return temp;
}

void show_array(const double* Begin, const double* End)
{
    int i = 0;
    for (; Begin != End; Begin++)
    {
        cout << "Property #" << i + 1 << " : $" << *Begin << endl;
        i++;
    }
}

void revalue(double* Begin, double* End, double r)
{
    for (double* temp = Begin; temp != End; temp++)
        *temp *= r;
}
