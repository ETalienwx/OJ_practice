#include<iostream>
#include<string>
using namespace std;
int numroot(int s)
{
	int ret = 0;
	while (s>0)
	{
		ret += s % 10;
		s /= 10;
	}
	while (ret>9)
	{
		ret = numroot(ret);
	}
	return ret;
}
int main()
{
	string s;
	while (cin >> s)
	{
		int num = 0;
		for (int i = 0; i < s.size(); i++)//·ÀÖ¹Êý×ÖÌ«³¤ÁË
		{
			num += s[i] - '0';
		}
		num = numroot(num);
		cout << num << endl;
	}
	system("pause");
	return 0;
}