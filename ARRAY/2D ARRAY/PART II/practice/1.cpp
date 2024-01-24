#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cout<<"enter rows of mat:";
    cin>>m;
    cout<<"enter cols of mat:";
    cin>>n;
    int a[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"display matrix:"<<endl;
      for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
           cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"printing both elemnts of diagonal:"<<endl;
     for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            {
           cout<<a[i][j]<<" ";
            }
            
            else
            {
                cout<<" "<<" ";
            }

        }
        cout<<endl;
    }




}