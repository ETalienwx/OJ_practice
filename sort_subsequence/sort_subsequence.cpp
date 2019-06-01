#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int ret = 0;
	int n;
	cin >> n;
	vector<int> v;
	for (int i = 0; i<n; i++)
	{
		int num;
		cin >> num;
		v.push_back(num);
	}
	int i = 0;
	while (i<n)
	{
		if (v[i]>v[i + 1])
		{
			while (v[i]>v[i + 1])
			{
				i++;
			}
			ret++;
			i++;
		}
		else if (v[i] == v[i + 1])
		{
			i++;
		}
		else
		{
			while (v[i]<v[i + 1])
			{
				i++;
			}
			ret++;
			i++;
		}
	}
	cout << ret << endl;
	system("pause");
	return 0;
}