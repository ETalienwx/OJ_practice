#include <iostream>
using namespace std;
int number(int x, int y)
{
	if (y == 1 || y == 2 * x - 1)
		return 1;
	if (y < 1 || y > 2 * x - 1)
		return 0;
	else
		return number(x - 1, y - 2) + number(x - 1, y-1) + number(x - 1, y);
}
int main()
{
	int n;
	while (cin >> n)
	{
		for (int i = 1; i <= n * 2 - 1; i++)
		{
			if (number(n, i) % 2 == 0)
			{
				cout << i << endl;
				break;
			}
			if (i == n * 2 - 1)
				cout << -1 << endl;			
		}
	}
	system("pause");
	return 0;
}