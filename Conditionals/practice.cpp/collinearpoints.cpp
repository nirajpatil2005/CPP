#include<iostream>
using namespace std;
int main()
{
    int x1,x2,x3,y1,y2,y3;
    cout<<"enter first point :";
    cin>>x1>>y1;
      cout<<"enter second point :";
    cin>>x2>>y2;
      cout<<"enter third point :";
    cin>>x3>>y3;
    
    float s1=((y2-y1)/(x2-x1));
    float s2=((y3-y2)/(x3-x2));
    if(s1==s2)
    {
        cout<<"line is straight";
    }
    else
    {
        cout<<"line is not straigth";
    }


}