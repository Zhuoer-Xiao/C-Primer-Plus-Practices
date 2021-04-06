#include <iostream>
using namespace std;
const int strsize = 20;
const int NUM = 5;
void display_by_name();
void display_by_title();
void display_by_bopname();
void display_by_preference();
struct bop {
	char fullname[strsize];
	char title[strsize];
	char bopname[strsize];
	int preference;
};
bop people[5] =
{
	{ "xiaoming", "BOSS", "AS", 0 },
	{ "xiaohong", "Junior Programmer", "MA", 1 },
	{ "xiaoduan", "Manager", "MIPS", 2 },
	{ "xiaogang", "Analyst Trainee", "CL", 1 },
	{ "xiaoyu", "Student", "LOOPY", 2 }
};
int main()
{
	char ch;

	cout << "Benevolent Order of Programmers Report\n"
		<< "a.display by name          b.display by title\n"
		<< "c.display by bopname       d.display by preference\n"
		<< "q.quit\n";
	cout << "Enter your chlice:";
	while (cin >> ch && ch != 'q')
	{
		switch (ch)
		{
		case 'a': display_by_name(); break;
		case 'b': display_by_title(); break;
		case 'c': display_by_bopname(); break;
		case 'd': display_by_preference(); break;
		}
		cout << "Next choice:";
	}
	cout << "Bye!" << endl;
	return 0;
}

void display_by_name() {
	for (int j = 0; j < NUM; j++)
		cout << people[j].fullname << endl;
}
void display_by_title() {
	for (int j = 0; j < NUM; j++)
		cout << people[j].title << endl;
}
void display_by_bopname() {
	for (int j = 0; j < NUM; j++)
		cout << people[j].bopname << endl;
}
void display_by_preference() {
	for (int j = 0; j < NUM; j++)
		if (people[j].preference == 0)
			cout << people[j].fullname << endl;
		else if (people[j].preference == 1)
			cout << people[j].title << endl;
		else cout << people[j].bopname << endl;
}
