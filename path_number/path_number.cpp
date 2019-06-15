#include <iostream>
using namespace std;
int path(int x,int y)
{
    if((x>1)&&(y>1))
        return path(x-1,y)+path(x,y-1);
    else if(((x==1)&&(y>=1))||((x>=1)&&(y==1)))
        return x+y;
    else
        return 0;

}
int main()
{
    int x,y;
    while(cin>>x>>y)
    {
        cout<<path(x,y)<<endl;
    }
    return 0;
}