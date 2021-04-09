#include <iostream>
using namespace std;

int fill_array(double arr[], int length)
{
    cout << "Please enter " << length << " numbers: ";
    int i = 0;
    while (cin >> arr[i] && i < length)
    {
        i++;
    }
    return i;
}

void show_array(const double arr[], int length)
{
    for (int i = 0; i < length; i++)
        cout << arr[i] << "    ";
    cout << endl;
}

void reverse_array(double arr[], int length)
{
    double temp;
    for (int i = 0, j = length - 1; i <= j; i++, j--)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}
int main()
{
    const int MaxLength = 10;
    double arr[MaxLength];
    int length = fill_array(arr, MaxLength);
    cout << "The array is : ";
    show_array(arr, length);
    reverse_array(arr, length);
    cout << "The reverse array is : ";
    show_array(arr, length);
    return 0;
}