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
    for(i=0;i<=n-1;i++)
    {
        cin>>arr[i];
    }
    // for(int i=0;i<=n-1;i++)
    // {
    if(arr[i]=x)
    {
        cout<<"element array:"<<"arr["<<i<<"]  "<<arr[i];
    }
    else{
        cout<<"element not found";
    }
  //  }

    return 0;
}