//��һ�仰�ĵ��ʽ��е��ã���㲻���á����� I like beijing. �����������Ϊ��beijing. like I

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
	string str;
	getline(cin, str);
	reverse(str.begin(), str.end());//���������ַ���
	//����ÿ������
	auto start = str.begin();
	while (start != str.end())
	{
		auto end = start;
		while ((end != str.end()) && ((*end) != ' '))
		{
			end++;
		}
		reverse(start, end);
		if (end != str.end())
		{
			start = end + 1;
		}
		else
		{
			start = end;
		}
	}
	cout << str << endl;
	return 0;
}