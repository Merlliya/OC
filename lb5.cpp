#include <iostream>
#include <iostream>
using namespace std;

int main(void)
{
	setlocale(LC_ALL, "rus");
	string word;
	bool ans = true;
	cout << "Введите число: ";
	cin >> word;
	int len = word.length();
	for (int i = 0; i < len / 2; ++i)
	{
		if (int( (word[i] <= 57) && (word[i]) >= 48) ) 
		{
			if (word[i] != word[len - i - 1])
			{
				ans = false;
			}
		}
		else
		{
			ans = false;
		}
		
	}
	if (ans) {
		cout << word << " это палиндром";
	}
	else
	{
		cout << word << " это не палиндром";
	}
}