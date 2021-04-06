#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Please enter one of the following choices:" << endl;
    cout << "c) carnivore           p) pianist" << endl;
    cout << "t) tree                g) game" << endl;
    while (1)
    {
        cin.get(ch);
        cin.ignore();
        if (ch == 'q')
        {
            cout << "ÍË³ö³ÌÐò¡£¡£¡£" << endl;
            break;
        }
        switch (ch)
        {
        case 'c':
            cout << "You select c" << endl;
            break;
        case 'p':
            cout << "You select p" << endl;
            break;
        case 't':
            cout << "You select t" << endl;
            break;
        case 'g':
            cout << "You select g" << endl;
            break;
        default:
            cout << "Please enter a , c , p , t , or g:";
            break;
        }
    }
    return 0;
}