#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        int num;
        cin>>num;
        v.push_back(num);
    }
    
    int max=v[0];
    int tmpmax=0;
    for(int i=0;i<v.size();i++)
    {
        tmpmax+=v[i];
        if(tmpmax>max)
            max=tmpmax;
        if(tmpmax<0)
            tmpmax=0;
    }
    cout<<max<<endl;
    system("pause");
    return 0;
}