#include <iostream>
#include <algorithm>
using namespace std;
bool is_perfect(int i)
{
    int sum=0;
    for(int n=2;n<sqrt(i);n++)
    {
        if((i%n)==0)
        {
            sum=sum+n+(i/n);
        }
    }
    if((sum+1)==i)
        return true;
    else
        return false;
}
int main()
{
    int n;
    while(cin>>n)
    {
        int count=0;
        for(int i=2;i<=n;i++)
        {
            if(is_perfect(i)==true)
                count++;
        }
        cout<<count<<endl;
    }
    system("pause");
    return 0;
}