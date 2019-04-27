#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
string add(string& s1, string& s2)
{
	int i = s1.size() - 1;//s1一共几个字符
	int j = s2.size() - 1;//s2一共几个字符
	string result = "";//定义一个结果字符串
	int num = 0;//num表示当前位相加的值
	while (i >= 0 || j >= 0)//如果两个字符串还有字符可以加
	{
		if (i >= 0)//s1有
			num += s1[i] - '0';
		if (j >= 0)//s2有
			num += s2[j] - '0';
		result += (char)(num % 10 + '0');//+=到result字符串上面
		num /= 10;//如果大于10考虑进位
		i--;//往前加
		j--;//往前加
	}
	if (num == 1)//如果走完两个字符串，num=1，说明还需要进位
	{
		result += '1';//给result+=字符1
	}
	reverse(result.begin(), result.end());//因为是+=到result里的，所以需要逆置字符串，传的是迭代器区间
	return result;//返回result字符串
}
int main()
{
	string s1, s2;
	while (cin >> s1 >> s2)
	{
		cout << add(s1, s2) << endl;//调用相加函数
	}
	system("pause");
	return 0;
}