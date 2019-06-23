#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    string s;
    vector<string> v;
    int count=0;
    while(cin>>s)
    {
        v.push_back(s);
        count++;
    }
    cout<<count<<endl;
    for(auto e:v)
    {
        cout<<e<<endl;
    }
    system("pause");
    return 0;
}