#include<iostream>
using namespace std;
int get_yueshu(int a,int b)//Õ·×ªÏà³ı·¨
{
    while(int tmp = a%b)
    {
        a=b;
        b=tmp;
    }
    return b;
}
int main()
{
    int a,b;
    cin>>a>>b;
    int n = get_yueshu(a,b);
    cout<<a*b/n<<endl;
    return 0;
}