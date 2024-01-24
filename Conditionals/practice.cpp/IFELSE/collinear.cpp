#include<iostream>
using namespace std;
int main()
{   int x1,x2,x3,y1,y2,y3;
    cout<<"enter 1st pt:";
    cin>>x1>>y1;
    cout<<"enter 2nd point:";
    cin>>x2>>y2;
    cout<<"enter 3rd pt:";
    cin>>x3>>y3;

    float m1=(y2-y1)/(x2-x1);
    float m2=(y3-y1)/(x3-x1);
    if(m1==m2)cout<<"colinear";
    else cout<<"noncollinear";
    return 0;
}