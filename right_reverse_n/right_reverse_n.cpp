//ÓÒĞın¸ö×Ö·û
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
void right_reverse(string& s, int step)
{
	reverse(s.begin(), s.end() - step);
	reverse(s.end() - step,s.end());
	reverse(s.begin(), s.end());
}
int main()
{
	string s = "abcdefghi";
	int step = 3;
	right_reverse(s, step);
	cout << s << endl;
	system("pause");
	return 0;
}