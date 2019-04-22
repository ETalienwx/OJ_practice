#include<iostream>
using namespace std;
int getday(int year, int month)
{
	static int arr[13] = { 0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365 };
	if ((month>2) && ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
	{
		return arr[month] + 1;
	}
	else
		return arr[month];
}
int main()
{
	int year, month, day, ret;
	while (cin >> year >> month >> day)
	{
		ret = getday(year, month - 1) + day;
		cout << ret << endl;
	}
	system("pause");
	return 0;
}