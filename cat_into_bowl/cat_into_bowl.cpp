#include <iostream>
using namespace std;
int main()
{
    double len,r;
    while(cin>>len>>r)
    {
        double circle=3.14*2*r;
        if(len<circle)
        {
            cout<<"Yes"<<endl;;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
    system("pause");
    return 0;
}