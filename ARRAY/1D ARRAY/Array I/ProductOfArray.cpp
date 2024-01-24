#include<iostream>
using namespace std;
int main()
{   
    int n;
    cout<<"enter no of entries to product:";
    cin>>n;
    int arr[n],product=1;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        product*=arr[i];
    }
   cout<<product;
}