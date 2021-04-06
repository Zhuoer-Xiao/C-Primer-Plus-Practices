#include <iostream>
#include <cctype>
using namespace std;
int main() {
    cout << "Enter text for analysis, and type @ to terminate input.\n";
    char ch;
    cin.get(ch);
    while (ch != '@')
    {
        if (islower(ch))
        {
            ch = toupper(ch);
        }
        else if (isupper(ch))
        {
            ch = tolower(ch);
        }
        if (isdigit(ch) == false)
        {
            cout << ch;
        }
        cin.get(ch);
    }
    cout << endl;
    return 0;
}