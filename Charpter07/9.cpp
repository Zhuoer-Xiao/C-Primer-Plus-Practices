#include <iostream>
#include <cstring>
using namespace std;

const int SLEN = 30;
struct student
{
    char fullname[SLEN];
    char hobby[SLEN];
    int ooplevel;
};


int getinfo(student pa[], int n)
{
    cout << "Please enter the information of students: " << endl;
    int i = 0;
    for (; i < n; i++)
    {
        cout << "Enter the student " << i + 1 << " fullname: ";
        if (!(cin >> pa[i].fullname) || !strcmp(pa[i].fullname, "\n"))     break;
        cout << "Enter the student " << i + 1 << " hobby: ";
        if (!(cin >> pa[i].hobby))      break;
        cout << "Enter the student " << i + 1 << " ooplevel: ";
        if (!(cin >> pa[i].ooplevel))      break;
    }
    return i;
}

void display1(student st)
{
    cout << "FullName: " << st.fullname << "\tHobby: " << st.hobby << "\tOOPlevel: " << st.ooplevel << endl;
}

void display2(student* ps)
{
    cout << "FullName: " << ps->fullname << "\tHobby: " << ps->hobby << "\tOOPlevel: " << ps->ooplevel << endl;
}

void display3(const student ps[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "The student " << i + 1 << " information is : " << endl << "FullName: " << ps[i].fullname << "\tHobby: " << ps[i].hobby << "\tOOPlevel: " << ps[i].ooplevel << endl;
    }
}
int main()
{
    cout << "Enter class size : ";
    int class_size;
    cin >> class_size;
    while (cin.get() != '\n')
        continue;
    student* ptr_stu = new student[class_size];
    int entered = getinfo(ptr_stu, class_size);
    for (int i = 0; i < entered; i++)
    {
        display1(ptr_stu[i]);
        display2(&ptr_stu[i]);
    }
    display3(ptr_stu, entered);
    delete[] ptr_stu;
    cout << "Done" << endl;
    return 0;
}

