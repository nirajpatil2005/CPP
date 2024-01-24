// find duplicate in array
#include<iostream>
using namespace std;
int main()
{   
    int n;
    cout<<"enter size of array:";
    cin>>n;
    int arr[n];
    cout<<"enter element of an array:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }cout<<endl;
   bool flag=false;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                flag=true;
                break;
            }
            else{
                flag=false;
            }
          
        }
          if(flag==true)break;
    }
    if(flag==true)
    {
         cout<<"duplicate exists";
    }
    else
    {
        cout<<"duplicate does not exist";
    }
    return 0;
}