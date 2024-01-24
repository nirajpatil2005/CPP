#include<iostream>
using namespace std;
int main()
{
    int n,x,i;
    cout<<"no of elements in array:";
    cin>>n;
    cout<<"enter element you want to search :";
    cin>>x;
    int arr[n];
    cout<<"enter elements of array:"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
   bool flag=false;//false->not present
    for(int i=0;i<=n-1;i++)
    {
        if(arr[i]==x) flag=true;
    }
    if(flag==true)
    {
    cout<<"element is found";
    return 1;
    }
    cout<<"hello man:";
    return 0;
}