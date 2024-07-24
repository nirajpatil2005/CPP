#include <iostream>
using namespace std;
void zigzag(int n)
{
    if(n==0)return;
    cout<<n;//kaam pre
    zigzag(n-1);//call
    cout<<n;//kam //in
   zigzag(n-1);//call 
    cout<<n;//post
    // pip(n-1);
}
int main()
{
    zigzag(1);cout<<endl;
    zigzag(2);cout<<endl;
    zigzag(3);cout<<endl;
    zigzag(4);cout<<endl;
    zigzag(5);cout<<endl;
    return 0;
}