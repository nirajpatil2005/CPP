#include<iostream>
using namespace std;
int main()
{
    int l,n;
    cout<<"enter length:";
    cin>>l;
    cout<<"enter breadth";
    cin>>n;
    int peri,area;
    peri=2*(l+n);
    area=l*n;
    if(peri>area)
    {
        cout<<"peri is greater than area";
    }
    else
    {
        cout<<"area is greater than peri";
    }

}