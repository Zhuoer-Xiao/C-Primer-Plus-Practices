#include <iostream>
using namespace std;

const int Seasons = 4;
const char* Snames[Seasons] =
{
  "Spring", "Summer", "Fall", "Winter"
};

struct expense
{
    double expenses[Seasons];
};

void fill_expense(expense* e);
void show_expense(const expense e);

int main()
{
    expense e;
    fill_expense(&e);
    show_expense(e);
    return 0;
}

void fill_expense(expense* e)
{
    for (int i = 0; i < Seasons; i++)
    {
        cout << "Enter " << Snames[i] << " expense : ";
        cin >> e->expenses[i];
    }
}

void show_expense(const expense e)
{
    double total = 0.0;
    cout << endl << "EXPENSES" << endl;
    for (int i = 0; i < Seasons; i++)
    {
        cout << Snames[i] << " : $" << e.expenses[i] << endl;
        total += e.expenses[i];
    }
    cout << "Total Expenses: $" << total << endl;
}