#include<iostream>
using namespace std;
int main()
{
    cout<<"enter no:";
    float x;
    cin>>x;//9.1;
    int y=(float)x;//9
    float z=(float)y;
    x=x-y;
    cout<<x;
return 0;
}