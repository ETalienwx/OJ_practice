//二进制中1的个数：方法一
#include<iostream>
using namespace std;
int main()
{
	int n;
	while (cin >> n)
	{
		int count = 0;
		while (n)
		{
			count++;
			n &= (n - 1);
		}
		cout << count << endl;
	}
	return 0;
}

//二进制中1的个数：方法二
#include<iostream>
using namespace std;
int main()
{
	int n;
	while (cin >> n)
	{
		int count = 0;
		for (int i = 0; i<32; i++)
		{
			if ((n >> i) & 1 == 1)
			{
				count++;
			}
		}
		cout << count << endl;
	}
	return 0;
}