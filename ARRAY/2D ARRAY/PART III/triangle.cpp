#include<iostream>
#include<vector>
using namespace std;
int main()
{   int n;
    cout<<"enter n:";cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<i+1;j++)
        {
            cout<<" * ";
        }
        cout<<endl;
    }cout<<endl;
      for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {   if(j+i>n)
        {
            cout<<" * ";
        }
        else
        {
            cout<<"   ";
        }
        }
        cout<<endl;
    }

}