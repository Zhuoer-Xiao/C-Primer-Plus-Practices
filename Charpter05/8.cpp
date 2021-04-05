#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char  str[20];
	cout << "Enter words (to stop, type the word done):" << endl;
	int total = 0;
	cin >> str;
	while (strcmp(str, "done"))
	{
		total++;
		cin >> str;
	}
	cout << "您输入的单词总共有" << total << "个" << endl;
	return 0;
}