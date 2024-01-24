#include<iostream>
#include<climits>
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
    int max=INT_MIN;
    cout<<"finding largest no:"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(max<arr[i][j])
            {
                max=arr[i][j];
            }
        }
    }
    cout<<"max elment of matrix: "<<max;
return 0;
}