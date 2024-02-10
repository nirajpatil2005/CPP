#include <iostream>
using namespace std;
int odd1ton(int sum,int odd)
{
    if(odd=sum)return ;
    int ans=odd1ton(sum+odd,odd-2);
    return ans;
}
int main()
{
    cout<<odd1ton(0,7);
    return 0;
}