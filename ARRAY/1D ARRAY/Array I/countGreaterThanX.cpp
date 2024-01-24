#include<iostream>
using namespace std;
int main()
{
    int n,x;
    cout<<"enter element in array:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"enter element to find greater element than it:";
    cin>>x;
    int count=0;
    for(int  i=0;i<n;i++)
    {
        if(arr[i]>x)
        {   
            count++;
            cout<<arr[i]<<endl;
        }
    }
    cout<<"no of no greater than "<<x<<"is:"<<count;
}