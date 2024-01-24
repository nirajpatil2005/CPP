#include<iostream>
using namespace std;
int main()
{
    // int arr[]={1,5,2,3,4};
    // int* ptr=arr;//true 
    // int* ptr = &arr;//wrong
    // int* ptr=&arr[0];//true
    // int* ptr= arr[0];//wrong
    int arr[]={90,4,2,3,4,5,6,7};
    int* ptr=arr; 
    cout<<ptr<<" ";//<<" "//<<//*ptr<<endl;
    for(int i=0;i<8;i++)
    {
        cout<<ptr[i]<<" ";//cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<8;i++)
    {
        cout<<*ptr<<" ";
        ptr++;
    }
    return 0;
}
