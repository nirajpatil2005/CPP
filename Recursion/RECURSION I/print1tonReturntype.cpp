#include <iostream>
using namespace std;
int sum1ton(int n)
{
    if(n==0)return 0;
    return n+sum1ton(n-1);
}  
int main(){
    // sum1ton(10);
    cout<<sum1ton(10);
    return 0;
}