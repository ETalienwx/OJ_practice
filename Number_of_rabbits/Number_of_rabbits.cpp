//��n���µ���������������������ɣ�
//һ�������ϸ��µ�����f(n-1)����һ����������3���´�����ӣ�����һֻ����f(n-2)
// ���Ե�n�������������� f(n) = f(n - 1) + f(n - 2) 
#include <iostream>
using namespace std;
int fib(int n)
{
	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	else
		return fib(n - 1) + fib(n - 2);
}
int main()
{
	int n;
	while (cin >> n)
	{
		cout << fib(n) << endl;
	}
	return 0;
}