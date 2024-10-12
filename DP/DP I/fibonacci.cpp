#include <iostream>
#include<vector>
#include<list>
#include<queue>
#include<stack>
#include<climits>
#include<algorithm>
using namespace std;
int fibonacci(int n)
{
    if(n==0 || n==1)return n;
    return fibonacci(n-1)+fibonacci(n-2);
}
//memoization
int fiboDp(int n,vector<int>&arr)
{
    if(n==1 || n==0)return n;
    if(arr[n]!=-1) return arr[n];
    arr[n]= fiboDp(n-1,arr)+fiboDp(n-2,arr);
    return arr[n]; 
}
int main()
{
    // cout<<fibonacci(50);
    int n=5;
    vector<int>arr(n+1,-1);
    cout<<fiboDp( n,arr);
// 0 1 1 2 3  5 8 13
    return 0;
}