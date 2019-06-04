#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> v;
	for (int i = 0; i<4; i++)
	{
		int num;
		cin >> num;
		v.push_back(num);
	}
	int	A, B, C;
	A = (v[0] + v[2]) / 2;
	B = (v[1] + v[3]) / 2;
	C = (v[3] - v[1]) / 2;
	if (A-B==v[0] && B-C==v[1] && A+B==v[2] && B+C==v[3])
	{
		cout << A << ' ' << B << ' ' << C << endl;
	}
	else
	{
		cout << "No" << endl;
	}
	system("pause");
	return 0;
}