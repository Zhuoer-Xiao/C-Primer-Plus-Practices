#include <iostream>
#include <climits>
using namespace std;
const int Max = 10;

int main()
{
    double donation[Max];
    int count = 0;
    int num = 0;
    double sum = 0.0;
    double average = 0.0;
    cout << "���������10����ֵ(���������ʱ����������)��" << endl;
    int i = 0;
    cin >> donation[i];
    while (isdigit(donation[i]))
    {
        ++count;
        sum += donation[i];
        ++i;
        if (i < 10)
            cin >> donation[i];
        else
            break;
    }
    if (0 == count)
        average = 0;
    else
        average = sum / count;

    for (int j = 0; j < i; j++)
    {
        if (donation[j] > average)
            ++num;
    }

    cout << "Average: " << average << endl;
    cout << "������������ " << num << "������ƽ��ֵ";
    return 0;
}
bool isdigit(double i)
{
    if (i <= INT_MAX && i >= INT_MIN)
        return true;
    else
        return false;
}