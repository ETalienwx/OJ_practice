#include <iostream>
#include <algorithm>
using namespace std;
bool is_prime(int n)
{
    int tmp=sqrt(n);
    for(int i=2;i<=tmp;i++)
    {
        if(n%i==0)
            return false;
    }
    return true;
}
int main()
{
    int num;
    int i;
    int half;
    while(cin>>num)
    {
        half=num/2;
        for(i=half;i>0;i--)
        {
            if(is_prime(i)&&is_prime(num-i))
                break;
        }
        cout<<i<<endl<<num-i<<endl;
    }
    return 0;
}