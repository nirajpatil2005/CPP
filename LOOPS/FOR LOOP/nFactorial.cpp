#include<iostream>
using namespace std;
int main()
{
    int i,n,f=1;
    cout<<"enter value of n:";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        f*=i;
        cout<<f<<endl;


    }
}