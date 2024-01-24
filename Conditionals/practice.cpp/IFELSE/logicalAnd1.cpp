#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter no:";
    cin>>n;
    if(n%3==0 && n%5==0)
    {
        cout<<"no is divisible by 3,5";
    }
    else
    {
        cout<<"no is not divisible by 3,5";
    }
    return 0;
}