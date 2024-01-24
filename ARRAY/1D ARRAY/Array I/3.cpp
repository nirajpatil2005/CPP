//minimum value in array
// by using climits lib (INT_MIN) 
//any var have smallest min value
#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cout<<"enter no of element :";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int min=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    cout<<endl;
    cout<<"minimum value of array is:"<<min;

}