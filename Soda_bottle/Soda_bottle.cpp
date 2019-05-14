#include <iostream>
#include <vector>
using namespace std;
int number(int n)
{
	int count = 0;//ÄÜ»»¶àÉÙÆ¿
	if (n <= 1)
		return 0;

	if (n == 2)
	{
		count++;
		return count;
	}

	else if (n >= 3)
	{
		count = (n / 3) + number((n / 3) + (n % 3));
	}
	return count;
}
int main()
{
	int i, num;
	vector<int> v;
	while (cin >> i)
	{
		if (i == 0)
			break;
		v.push_back(i);
	}
	for (int i = 0; i < v.size(); i++)
	{
		num = number(v[i]);
		cout << num << endl;
	}
	system("pause");
	return 0;
}