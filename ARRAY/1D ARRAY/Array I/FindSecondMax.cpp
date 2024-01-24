// finding second max element in array
#include<iostream>
#include<climits>
using namespace std;
void put(int arr[],int n)
{
     for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
}
int main()
{
    int n;
    cout<<"enter no of elements:";
    cin>>n;
    int arr[n];
    put(arr,n);
    int max=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    cout<<"max of array is:"<<max<<endl;
    int secmax=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if((arr[i]>secmax) && (arr[i]!=max))
        {
            secmax=arr[i];
        }
    }
    cout<<"secmax is:"<<secmax;
    return 0;
}