#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter marks:";
    cin>>n;
    if(n>=91)
    {
        cout<<"excellent";
    }
    else if(n>=81)
    {
        cout<<"very good";
    }
    else if(n>=61)
    {
        cout<<"good";
    }
     else if(n>=51)
    {
        cout<<"can do better";
    }
    else if(n>=41)
    {
        cout<<"below avearge";
    }
    else 
    {  cout<<"fail";
    }
}
