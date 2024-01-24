#include<iostream>
using namespace std;
int main()
{
    cout<<"enter radius:";
    int r;
    cin>>r;
   int area,circum;
   float const pi=3.142;
   area=pi*r*r;
   circum=2*pi*r;
    if(area>circum)
    {
        cout<<"area"<<"is greater than "<<"circum"<<endl;
    }
    else
    {
        cout<<"circum"<<"is greater than "<<"area"<<endl;
    }
}