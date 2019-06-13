#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
	int num;
	cin >> num;
	vector<string> v;
	for (int i = 0; i<num; i++)
	{
		string s;
		cin >> s;
		v.push_back(s);
	}
    
    bool len=true,dic=true;
    //ÅÐ¶Ï³¤¶È
    for(size_t i=1;i<v.size();i++)
    {
        if(v[i-1].size()>=v[i].size())
        {
            len=false;
            break;
        }
    }
    //ÅÐ¶Ï×ÖµäÐò
    for(size_t i=1;i<v.size();i++)
    {
        if(v[i-1]>=v[i])
        {
            dic=false;
            break;
        }
    }
    if(len&&dic)
        cout<<"both"<<endl;
    else if(len&&!dic)
        cout<<"lengths"<<endl;
    else if(!len&&dic)
        cout<<"lexicographically"<<endl;
    else if(!len&&!dic)
        cout<<"none"<<endl;
    system("pause");
    return 0;
}