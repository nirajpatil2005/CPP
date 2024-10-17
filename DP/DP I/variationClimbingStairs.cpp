#include <iostream>
#include <vector>
#include <list>
#include <queue>
#include <stack>
#include <climits>
#include <algorithm>
using namespace std;
// memoization
int climbstairsvar(int n, vector<int> &arr) // 1,2,3 steps
{
    if (n == 0)
        return 1;
    if (n < 0)
        return 0;
    if (arr[n] != -1)
        return arr[n];
    arr[n] = climbstairsvar(n - 1, arr) + climbstairsvar(n - 2, arr) + climbstairsvar(n - 3, arr);
    return arr[n];
}
int countwaystab(int n)
{
    vector<int> arr(n+1);
    arr[0] = 1;
    arr[1] = 1;
    arr[2] = 2;
    arr[3]=4;
    for (int i = 3; i <= n; i++)
    {
        arr[i]=arr[i-1]+arr[i-2]+arr[i-3];
    }
    return arr[n];
}
int main()
{
    int nos = 4;
    vector<int> arr(nos + 1, -1);
    cout << climbstairsvar(nos, arr)<<endl;
    cout<<countwaystab(nos);
    return 0;
}