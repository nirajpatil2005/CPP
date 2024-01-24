#include<iostream>
using namespace std;
int main()
{
    int x,y;
    int* p1=&x;
    int* p2=&y;
    cout<<"enter 1st no:";
    cin>>*p1;
     cout<<"enter 2nd no:";
    cin>>*p2;
    cout<<*p1<<" "<<*p2<<" "<<*p1+*p2<<endl;
    cout<<"x:"<<x<<" "<<"y:"<<y<<endl;
    return 0;
}