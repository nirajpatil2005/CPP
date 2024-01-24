#include<iostream>
using namespace std;
int main()
{   
    int n;
    cout<<"enter no of entries to add:";
    cin>>n;
    int arr[n],totalsum=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        totalsum+=arr[i];
    }
   cout<<totalsum;
}