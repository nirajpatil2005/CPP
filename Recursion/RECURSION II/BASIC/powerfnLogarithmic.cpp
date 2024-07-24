#include <iostream>
using namespace std;

int pow(int a, int b) {
    if (b == 0)
        return 1;
    
    int temp = pow(a, b / 2);
    
    if (b % 2 == 0)
        return temp * temp;
    else
        return a * temp * temp;
}
int power(int a,int p)
{
    if(p==0)return 1;
    return a*power(a,p-1);
}
int main() {
    int a, b;
    cin >> a >> b;
    cout << pow(a, b);
    cout<<endl<<power(a,b);
    return 0;
}
