#include <iostream>
#include <string>
using namespace std;
int main()
{
	string word;
	int consonants = 0, vowels = 0, others = 0;
	cout << "Enter words (q to quit):\n";
	cin >> word;
	while (word != "q")
	{
		if (isalpha(word[0]))
		{
			char ch = tolower(word[0]);
			switch (ch)
			{
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u': vowels++;
				break;
			default: consonants++;
				break;
			}
		}
		else
			others++;
		cin >> word;
	}
	cout << vowels << " beginning with vowels\n";
	cout << consonants << " beginning with consonants\n";
	cout << others << " others\n";
	return 0;
}


