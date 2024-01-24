#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter marks of three sub:";
    cin>>a>>b>>c;
    if(a>b)
    {
        if(b>c)
        {
            cout<<c<<"is least digit than"<<b<<" "<<a;
        }
        else if(c>b)
        {
            cout<<b<<"is lesser than"<<a<<" "<<c;
        }
        
    }
    if( b>a)
    {
        if(c>b)
        {
            cout<<a<<"is lesser than"<<b<<" "<<a;
        }
    }
}