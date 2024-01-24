#include<iostream>
using namespace std;
int main()
{
    int n;
        cout<<"enter no:";
        cin>>n;
     for(int i=2;i<=n-1;i++)
 {   
    if(n%i==0)
    {
        cout<<"composite no"<<endl;
        break;
    }
    else
    {
        cout<<"prime no"<<endl;
        break;
        
    }


        
    }
}