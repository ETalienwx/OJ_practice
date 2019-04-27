#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
string add(string& s1, string& s2)
{
	int i = s1.size() - 1;//s1һ�������ַ�
	int j = s2.size() - 1;//s2һ�������ַ�
	string result = "";//����һ������ַ���
	int num = 0;//num��ʾ��ǰλ��ӵ�ֵ
	while (i >= 0 || j >= 0)//��������ַ��������ַ����Լ�
	{
		if (i >= 0)//s1��
			num += s1[i] - '0';
		if (j >= 0)//s2��
			num += s2[j] - '0';
		result += (char)(num % 10 + '0');//+=��result�ַ�������
		num /= 10;//�������10���ǽ�λ
		i--;//��ǰ��
		j--;//��ǰ��
	}
	if (num == 1)//������������ַ�����num=1��˵������Ҫ��λ
	{
		result += '1';//��result+=�ַ�1
	}
	reverse(result.begin(), result.end());//��Ϊ��+=��result��ģ�������Ҫ�����ַ����������ǵ���������
	return result;//����result�ַ���
}
int main()
{
	string s1, s2;
	while (cin >> s1 >> s2)
	{
		cout << add(s1, s2) << endl;//������Ӻ���
	}
	system("pause");
	return 0;
}