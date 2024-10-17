#include <iostream>
#include<vector>
#include<list>
#include<queue>
#include<stack>
#include<climits>
#include<algorithm>
using namespace std;
//memoization
int climbingStairs(int nos,vector<int>&arr)
{
    if(nos==1 || nos==2)return nos;
    if(arr[nos]!=-1)return arr[nos];
    arr[nos]= climbingStairs(nos-1,arr)+climbingStairs(nos-2,arr);
    return arr[nos];
}
//tabulation climbing stairs tabulation
int cstab(int n)//O(n)
{
    vector<int>arr(n+1,0);
    arr[0]=1;
    arr[1]=1;
     for(int i=2;i<=n;i++)
     {
         arr[i]= arr[i-1]+ arr[i-2];
     }
     return arr[n];
}
int main()
{
    int nos=5;
    vector<int>arr(nos+1,-1);
    cout<<climbingStairs(nos,arr);
    cout<<endl<<cstab(nos);
    return 0;
}