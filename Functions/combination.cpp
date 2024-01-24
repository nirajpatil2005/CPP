#include<iostream>
using namespace std;
int fact(int x)
{
    int f=1;
    for(int i=2;i<=x;i++)
    {
        f*=i;
    }
    return f;
}
int combination(int n, int r)
{
    int ncr=fact(n)/(fact(r)*fact(n-r));
}
int permutation( int n,int r)
{
    int npr=fact(n)/(fact(n-r));
}
int main()
{   int n,r;
    cout<<"enter n:";
    cin>>n;
    cout<<"enter r:";
    cin>>r;
    int ncr=combination(n,r);
    cout<<ncr<<endl;
    int npr=permutation(n,r);
    cout<<npr;
}