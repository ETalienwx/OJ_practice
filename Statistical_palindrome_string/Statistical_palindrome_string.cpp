#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
bool IsTrue(string& s)//�ж��Ƿ��ǻ��Ĵ�
{
	string tmp = s;
	reverse(tmp.begin(), tmp.end());
	if (tmp == s)
	{
		return true;
	}
	else
		return false;
}
int main()
{
	string s1, s2;
	getline(cin, s1);
	getline(cin, s2);
	int count = 0;
	for (size_t i = 0; i <= s1.size(); i++)
	{
		string str = s1;//�����޸�s1���ʹ���һ��str
		str.insert(i, s2);
		if (IsTrue(str))
			count++;
	}
	cout << count << endl;
	return 0;
}