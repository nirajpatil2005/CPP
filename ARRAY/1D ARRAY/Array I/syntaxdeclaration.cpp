#include<iostream>
using namespace std;
int main()
{   
    // int arr[10]={1,2,3,4,5,6,7,8,9,0};
    // cout<<arr[7]<<endl;
    int arr1[]={1,2,3,4,5,6,7,8,9,0};
    // cout<<arr1[10]<<endl;
    for(int i=1;i<=10;i++)
    {
        cout<<"arr1["<<i<<"] = "<<arr1[i]<<endl;
    }

    int arr2[10];
     for(int i=1;i<=10;i++)
    {
        cin>>arr2[i];
    }
    return 0;
}