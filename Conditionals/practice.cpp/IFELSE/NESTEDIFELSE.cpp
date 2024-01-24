#include<iostream>
using namespace std;
int main()
{
    cout<<"enter no:";
    int n;
    cin>>n;
    if( n%3==0 || n%5==0)
    {
        cout<<"it is divisible by 3 or 5"<<endl;
        if(n%15==0)
        {
            cout<<" it isnt divisible by 15";
        }
        else{
            cout<<"it is not divisible by 15";
        }
    }
      else
      {
        cout<<"it is not divisible by 5 or 3";
      }  
    }

