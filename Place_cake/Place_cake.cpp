#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int x, y;
	int ret=0;
	cin >> x >> y;
	vector<vector<int>> a;
	a.resize(x);
	for (auto &e : a)
		e.resize(y, 1);//内嵌vector的大小为y每个数设为1
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			if (a[i][j] == 1)
			{
				ret++;
				if ((i + 2) < x)
					a[i + 2][j] = 0;
				if ((j + 2) < y)
					a[i][j + 2] = 0;
			}
		}
	}
	cout << ret <<endl;
	system("pause");
	return 0;
}