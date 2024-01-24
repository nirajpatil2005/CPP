#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter no:";
    cin>>n;
    if(100<=n && n<=999)
    {
        cout<<"no is three digit";
    }
    else
    {
        cout<<"no is not three digit";
    }
    return 0;
}