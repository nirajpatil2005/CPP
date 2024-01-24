#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter no:";
    cin>>n;
    if(n%5==0 || n%3==0)
    {
        cout<<"right";
    }
    else
    {
        cout<<"wrong";

    }
    return 0;
}