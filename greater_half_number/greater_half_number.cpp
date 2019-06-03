Number of occurrences exceeding half.
方法一：map计数
#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main()
{
	vector<int> v;
	int n;
	while (cin >> n)
	{
		v.push_back(n);
	}
	//v.push_back(1);
	//v.push_back(2);
	//v.push_back(3);
	//v.push_back(2);
	//v.push_back(2);
	//v.push_back(2);
	//v.push_back(1);

	map<int, int> m;
	int count = 0;
	for (auto e : v)
	{
		m[e]++;
		count++;
	}
	for (auto e : m)
	{
		if (e.second >= count / 2)
			cout << e.first;
	}
	system("pause");
	return 0;
}
方法二：哈希映射
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> v;
	int n;
	while (cin >> n)
	{
		v.push_back(n);
	}
	//v.push_back(1);
	//v.push_back(23);
	//v.push_back(3);
	//v.push_back(23);
	//v.push_back(23);
	//v.push_back(23);
	//v.push_back(1);

	int arr[100] = { 0 };
	int count = 0;
	for (size_t i = 0; i < v.size(); i++)
	{
		arr[v[i]]++;
		count++;
	}
	for (int i = 0; i < v.size(); i++)
	{
		if (arr[v[i]] >= count / 2)
		{
			cout << v[i] << endl;
			break;
		}
	}
	system("pause");
	return 0;
}
