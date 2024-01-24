#include<iostream>
using namespace std;
void areaofcircle(double r)
{
    double area=3.142*r*r;
    cout<<"area of circle:"<<area;
}
int main()
{   
    double r;
    cout<<"ebter radius of circle";
    cin>>r;
    areaofcircle(r);
    
    return 0;
}