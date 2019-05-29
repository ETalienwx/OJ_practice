#include<iostream>
#include<vector>
#include<set>

using namespace std;

bool is(vector<int> v)
{
	int arr[1024] = { 0 };
	for (int i = 0; i<v.size(); i++)
	{
		arr[v[i]]++;
		if (arr[v[i]]>1)
			return true;
	}
	return false;
}
bool IsSame(vector<int> v)
{
	set<int> s;
	for (auto e : v)
	{
		s.insert(e);
	}
	if (s.size() == v.size())
		return false;
	else
		return true;
}
int main()
{
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(3);
	v.push_back(3);
	v.push_back(4);
	//if(is(v)==true)数组映射
	if (IsSame(v)==true)//set判断
	{
		cout << "有重复的元素" << endl;
	}
	else
	{
		cout << "没有重复的元素" << endl;
	}
	system("pause");
	return 0;
}