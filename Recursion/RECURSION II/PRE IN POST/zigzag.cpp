#include <iostream>
using namespace std;
void zigzag(int n)
{
    if(n==0)return;
    cout<<n;
    zigzag(n-1);
    cout<<n;
   zigzag(n-1);
    cout<<n;
    // pip(n-1);
}
int main()
{
    zigzag(4);
    return 0;
}