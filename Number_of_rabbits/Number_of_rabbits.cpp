//第n个月的兔子数量：有两部分组成，
//一部分是上个月的兔子f(n-1)，另一部分是满足3个月大的兔子，会生一只兔子f(n-2)
// 所以第n个月兔子总数： f(n) = f(n - 1) + f(n - 2) 
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