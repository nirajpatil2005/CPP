#include<iostream>
using namespace std;
int main()
{
    /*
      *
     ***
    ***** 
    */
    int n;
    cout<<"enter n:";
    cin>>n;
    for(int i=1;i<=n;i++)
    {   
        for(int j=1;j<=i;j++)
        {
            for(int k=1;k<=(n-1)/2;k++)
            {
                cout<<" ";
            }
            cout<<" * ";
        }
        cout<<endl;
    }
    return 0;

}