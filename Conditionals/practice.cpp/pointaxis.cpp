#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cout<<"enter values of x and y resp:";
    cin>>x>>y;
   if(x==0 && y==0)
   {
    cout<<"pt is origin";
   }
   else if(x>0 && y>0)
    {
        cout<<"pt is lies b/w 1st quadrant";
    }
    else if(x>0 &&y<0)
    {
        cout<<"pt is lies in 4th quadrant";
    }
    else if(x<0 && y>0)
    {
        cout<<"pt lies on 2nd quadrant";
    }
    else
    {
        cout<<"pt lies on 3rd quadrant";
    }
}
