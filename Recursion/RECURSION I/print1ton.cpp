#include <iostream>
using namespace std;
void print(int i,int n)
{
    if(i>n)return;//base case
    cout<<i<<endl;//kaam
    print(i+1,n);//call

    // while(i<=n)
    // {
    //     cout<<i<<" ";
    //     i++;
    // }
    // if(i==n) return;
}
int main()
{
    print(1,10);
    return 0;
}