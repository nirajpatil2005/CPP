#include<iostream>
using namespace std;
int main()
{   
    int n,m;
 
    cout<<"enter no of rows:";
    cin>>n;
    cout<<"enter no of columns:";
    cin>>m;
       int arr[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
        cout<<endl;
    }
    cout<<"displaying matrix:"<<endl;
     for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int sum=0;
    cout<<"sum of element of matrix::"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
          sum+=arr[i][j];
        }
    }
    cout<<"sum of element is: "<<sum;
return 0;
}