//here min(x,y) and max(x,y) are inbuilt libraries

#include<iostream>
using namespace std;
int sum(int x,int y)
{
    return x+y;
}
int mini(int x, int y)
{
     int a;
     if(x>y) a=y;
     else a=x;
     return a;
}
int main()
{
    int x,y;
    cin>>x>>y;
    cout<<max(x,y)<<endl;
    cout<<min(x,y);
}