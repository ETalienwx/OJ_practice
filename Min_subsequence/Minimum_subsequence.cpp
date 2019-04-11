#include <iostream>
using namespace std;
int main()
{
	//ÊäÈë
	int n;
	int arr[1000] = { 0 };
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int num;
		cin >> num;
		arr[i] = num;
	}
	//¼ÆËã
	int thissum, minsum = 0;
	for (auto e : arr)
	{
		thissum += e;
		if (minsum > thissum)
			minsum = thissum;
		else if (thissum > 0)
			thissum = 0;
	}
	cout << minsum << endl;
	return 0;
}