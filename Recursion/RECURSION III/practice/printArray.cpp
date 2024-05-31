#include<iostream>
#include<climits>
using namespace std;
void display(int arr[],int n,int idx)
{
    if(idx==n)return;
    else cout<<arr[idx]<<" ";
    return display(arr,n,idx+1);
}
int maxinarray(int arr[],int n,int idx)
{
    if(idx==n)return INT_MIN;
    return max(arr[idx],maxinarray(arr,n,idx+1));
}
int mininarray(int arr[],int n,int idx)
{
    if(idx==n)return INT_MAX;
    return min(arr[idx],mininarray(arr,n,idx+1));
}
int main()
{
    int arr[]={2,1,-4903,389806,4,6,7,8,2,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    // for(int ele:arr)
    // {
    //     cout<<ele<<" ";
    // }
    display(arr,n,0);
    cout<<endl<<maxinarray(arr,n,0);
    cout<<endl<<mininarray(arr,n,0);
}