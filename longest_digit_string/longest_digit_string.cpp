#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	cin >> s;
	string ret = "";
	string tmp = "";
	auto begin = s.begin();
	while (begin != s.end())
	{
		if (*begin<'0' || *begin>'9')
		{
			while (*begin<'0' || *begin>'9')
				begin++;
		}
		else
		{
			tmp.clear();
			while (*begin >= '0' && *begin <= '9' && *begin != '\0')
			{
				tmp.push_back(*begin);
				begin++;
			}
			if (ret.size()<tmp.size())
				ret = tmp;
		}
	}
	cout << ret << endl;
	system("pause");
	return 0;
}