#include <iostream>
#include <utility>
#include <map>
#include <iomanip>
#include <list>
#include <iostream>
using namespace std;

int main(void)
{
	setlocale(LC_ALL, "rus");
	int n;

	cout << "Введите количество вершин многоугольника: ";
	cin >> n;
	double **сoordinates;
	сoordinates = new double*[n+1];
	for (int i = 0; i <= n; i++)
	{
		сoordinates[i] = new double[2];
	}
	for (int i = 0; i < n; i++)
	{
		cout << "Введите коордиаты " << i << " вершины x, y: ";
		cin >> сoordinates[i][0] >> сoordinates[i][1];
	}
	сoordinates[n][0] = сoordinates[0][0];
	сoordinates[n][1] = сoordinates[0][1];
	double S1 = 0;
	double S2 = 0;
	for (int i = 0; i < n; i++)
	{
		S1 += сoordinates[i][0] * сoordinates[i + 1][1];
		S2 += сoordinates[i][1] * сoordinates[i + 1][0];
	}

	S1 = (S1 - S2) / 2;
	
	cout << S1;

	return 0;
}