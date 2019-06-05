#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    string arr="0123456789ABCDEF";
    int m,n;
    cin>>m>>n;
    while(m)
    {
        if(m<0)
        {
            m=-m;
            cout<<'-';
        }
        s=arr[m%n]+s;
        m/=n;
    }
    cout<<s<<endl;
    system("pause");
    return 0;
}