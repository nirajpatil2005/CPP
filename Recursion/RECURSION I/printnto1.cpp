#include <iostream>
using namespace std;
int print(int n)
{
    if(n==0) return 1;
    cout<<n<<" ";
    print(n-1);
    return n;
}
int main()
{
    int n;
    cin>>n;
    print(n);
    return 0;
}