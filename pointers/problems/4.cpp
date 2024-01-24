#include<iostream>
using namespace std;
void countsquare(long long n)
{   
    int count=1;
    while(n>9)
    {
        n/=10;
        count++;
    }
    cout<<"digit in no:"<<count<<endl;
    cout<<"square of no:"<<n*n;
}
int main()
{
    long long n;
    cout<<"enter no:";
    cin>>n;
    countsquare(n);
    return 0;
}