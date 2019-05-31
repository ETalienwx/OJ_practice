#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s1, s2;
	getline(cin, s1);
	getline(cin, s2);
	string ret;
	int arr[256] = { 0 };
	for (int i = 0; i<s2.size(); i++)
	{
		arr[s2[i]] = 1;
	}
	for (int i = 0; i<s1.size(); i++)
	{
		if (arr[s1[i]] == 0)
		{
			ret.push_back(s1[i]);
		}
	}
	cout << ret << endl;
	system("pause");
	return 0;
}