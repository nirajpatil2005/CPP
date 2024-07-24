#include <iostream>
using namespace std;
int fibo(int n)
{
    if(n==1 || n==2) return 1;
    return fibo(n-1)+fibo(n-2);
}
void printfibo(int n)
{
  int first=1;
  int last=1;
  int next=first+last;
  
}
int main()
{
    //1 1 2 3 5 8 13 21 34 55 89
    int n;
    cout<<"enter no of terms you want to see of fibonacci:";
    cin>>n;
    cout<<fibo(n)<<endl;
    printfibo(6);
    return 0;
}