#include<iostream>
using namespace std;
int main()
{
    char x;
    cout<<"enter charecter:";
    cin>>x;
    int y=(int)x;
    if((y>=65 && y<=90 ) || (y>=97) && (y<=122))
    {
        cout<<"this is alphabet";
    }
    else
    {
        cout<<"this is not alphabet";
    }
}