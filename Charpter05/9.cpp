#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	cout << "Enter words (to stop, type the word done):" << endl;
	int total = 0;
	while (cin >> str && str != "done")
	{
		total++;
	}
	cout << "������ĵ����ܹ���" << total << "��" << endl;
	return 0;
}