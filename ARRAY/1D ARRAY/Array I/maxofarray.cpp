#include <iostream>
#include<climits>
using namespace std;
int main()
{
    int n,arr[n];
  
    cout<<"enter no of element:";
    cin>>n;
    cout<<"enter element:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    //   int maxofarr =arr[0];
    // for (int i = 0; i < n; i++)
    // {
    //     if (maxofarr < arr[i])
    //     {
    //         maxofarr = arr[i];
    //     }
    // }
      int maxofarr =INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (maxofarr < arr[i])
        {
            maxofarr = arr[i];
        }
    }
    cout<<"max of array is:"<<maxofarr;
    return 0;
}