#include<iostream>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        int x,y;

        int f0=0,f1=1,f2;
        while(1)
        {
            f2=f0+f1;
            f0=f1;
            f1=f2;

            if(n>f2)
            {
                x=n-f2;
            }
            else
            {
                y=f2-n;
                break;
            }
        }
        cout<<min(x,y)<<endl;
    }
    
    return 0;
}