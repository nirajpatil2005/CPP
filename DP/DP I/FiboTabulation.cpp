#include <iostream>
#include<vector>
#include<list>
#include<queue>
#include<stack>
#include<climits>
#include<algorithm>
using namespace std;
int FiboTab(int n)
{
    vector<int>fibo(n+1,0);
    fibo[0]=0;fibo[1]=1;
    for(int i=2;i<=n;i++)
    {
        fibo[i]=fibo[i-1]+fibo[i-2];
    }
    return fibo[n];
}
int main()
{
    cout<<FiboTab(10);
    return 0;
}