#include <iostream>
#include <string>
using namespace std;

bool symnumber = false;
bool symbig = false;
bool symsmall = false;
bool symsym = false;

int sum1(const string& s)
{
	int size = s.size();
	if (size <= 4)
		return 5;
	else if (size>4 && size<7)
		return 10;
	else
		return 25;
}
int sum2(const string& s)
{
	string small;
	string big;
	for (size_t i = 0; i<s.size(); i++)
	{
		if ((s[i] >= 'a' && s[i] <= 'z'))
		{
			symsmall = true;
			small.push_back(s[i]);
		}
	}
	for (size_t i = 0; i<s.size(); i++)
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
		{
			symbig = true;
			big.push_back(s[i]);
		}
	}
	if (small.empty() && big.empty())
		return 0;
	else if (!small.empty() && big.empty())
		return 10;
	else if (small.empty() && !big.empty())
		return 10;
	else
		return 20;
}
int sum3(const string& s)
{
	string num;
	for (size_t i = 0; i<s.size(); i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			symnumber = true;
			num.push_back(s[i]);
		}
	}
	if (num.size() == 0)
		return 0;
	else if (num.size() == 1)
		return 10;
	else
		return 20;
}
int sum4(const string& s)
{
	string symbol;
	for (size_t i = 0; i<s.size(); i++)
	{
		if (s[i] >= '!' && s[i] <= '/')
			symbol.push_back(s[i]);
	}
	for (size_t i = 0; i<s.size(); i++)
	{
		if (s[i] >= ':' && s[i] <= '@')
			symbol.push_back(s[i]);
	}
	for (size_t i = 0; i<s.size(); i++)
	{
		if (s[i] >= '[' && s[i] <= '`')
			symbol.push_back(s[i]);
	}
	for (size_t i = 0; i<s.size(); i++)
	{
		if (s[i] >= '{' && s[i] <= '~')
			symbol.push_back(s[i]);
	}
	if (symbol.size() == 0)
		return 0;
	else if (symbol.size() == 1)
	{
		symsym = true;
		return 10;
	}
	else
		return 20;
}
int sum5(const string& s)
{
	if ((symbig || symsmall) && symnumber)
		return 2;
	else if ((symbig || symsmall) && symnumber && symsym)
		return 3;
	else
		return 5;
}
int main()
{
	string s;
	while(cin >> s)
    {
        int ret = sum1(s) + sum2(s) + sum3(s) + sum4(s) + sum5(s);
        if (ret >= 90)
            cout << "VERY_SECURE" << endl;
        else if (ret >= 80)
            cout << "SECURE" << endl;
        else if (ret >= 70)
            cout << "VERY_STRONG" << endl;
        else if (ret >= 60)
            cout << "STRONG" << endl;
        else if (ret >= 50)
            cout << "AVERAGE" << endl;
        else if (ret >= 25)
            cout << "WEAK" << endl;
        else
            cout << "VERY_WEAK" << endl;
    }
	//system("pause");
	return 0;
}
