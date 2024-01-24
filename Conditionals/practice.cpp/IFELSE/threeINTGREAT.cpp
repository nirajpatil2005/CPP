#include<iostream>
using namespace std;
int main()
{
    int x,y,z;
    cout<<"enter  three no:";
    cin>>x>>y>>z;
    if(x>y && x>z)
    {
        cout<<x<<"is greter than "<<y,z;

    }
    else if(y>z && y>x)
    {
        cout<<y<<"is greater than "<<x,z;
    }
    else
    {
        cout<<z<<"is greater than "<<y,z;
    }
    return 0;
}