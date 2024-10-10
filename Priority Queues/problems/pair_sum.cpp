#include <iostream>
#include<vector>
#include<list>
#include<queue>
#include<stack>
#include<climits>
#include<algorithm>
#include<unordered_map>
using namespace std;

int main()
{
    int arr[]={1,2,7,9,11,5,9,8};
    int n=8;
    int target=9;
    unordered_map<int,int>m;
    //key=arr[i] value=i

    for(int i=0;i<n;i++)
    {
        int comp=target-arr[i];
         if(m.count(comp))
         {
            cout<<"ans="<<m[comp]<<" , "<<i<<endl;
            break;
         }
         m[arr[i]]=i;
    }


    return 0;
}