#include<iostream>
using namespace std;
int main()
{
    int x=12;
    int* ptr=&x;
    int **p=&ptr;
    cout<<**p<<" "<<*p<<" "<<p<<" "<<ptr;
    return 0;
}
