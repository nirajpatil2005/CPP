#include<iostream>
using namespace std;
int main()
{
    cout<<"enter year:";
    int r;
    cin>>r;
   
    if((r%100==0 && r%400==0) || (r%4==0 )  )
    {
        cout<<"year is laeap"<<endl;
    }
    else if(r%100==0 || r%4!=0)
    {
        cout<<"year isnot leap"<<endl;
    }
}