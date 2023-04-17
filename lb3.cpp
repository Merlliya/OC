#include <iostream>
#include <iostream>
using namespace std;

int main(void)
{
	setlocale(LC_ALL, "rus");
	int n;
	cout << "Введите число: ";
	cin >> n;
	for (; n>0; n--)
	{
		cout << n << endl;
		if (n % 5 == 0) 
		{
			cout << "beep" << endl;
		}
	}
	return 0;
}