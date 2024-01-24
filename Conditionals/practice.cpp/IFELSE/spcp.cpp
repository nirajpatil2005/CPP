#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cout<<"enter cost price:";
    cin>>x;
    cout<<"enter selling price:";
    cin>>y;
    if(y>x)
    {
        cout<<"profit of "<<endl<<y-x;
    }
    else if(x=y)
    {
        cout<<"no profpit no loss";
    }
    else
    {
        cout<<"loss of "<<endl<<x-y;
    }
    return 0;



}