#include <iostream>
#include<climits>
using namespace std;
int printmax(int arr[],int n,int idx,int max)
{
    if(idx==n)return max;
    if(max<arr[idx])max=arr[idx];
    printmax(arr,n,idx+1,max);
    
}
int maxinarray(int arr[],int n,int idx)
{
    if(idx==n)return INT_MIN;
    return max(arr[idx],maxinarray(arr,n,idx+1));
}
int main()
{
    int arr[]={2,1,6,3,9,200,220,7,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    // cout<<printmax(arr,n,0,INT_MIN);
    cout<<maxinarray(arr,n,0);


    return 0;
}