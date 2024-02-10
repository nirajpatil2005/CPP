#include <iostream>
using namespace std;
int factorial(int n)
{
    if (n == 1 || n==0)
        return 1;
    int ans = 1;
    ans = n * factorial(n - 1);
    return ans;
}
int main()
{
    int a = factorial(0);
    cout << a;
    return 0;
}