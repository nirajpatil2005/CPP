// #include<iostream>
// using namespace std;
// int main()
// {
//     int n=1;
//     cout<<"enter n:";
//     cin>>n;
//     int f=1;
 
//     for(int i=2;i<=n;i++)
//     {
//         f*=i;
//     }
//     cout<<f;
// }
#include<iostream>
using namespace std;
int factorial(int n)
{
    int f=1;
    for(int i=2;i<=n;i++)
    {
        f*=i;
    }
    cout<<f<<endl;
};
int main()
{
    int n;
    cout<<"enter no:";
    cin>>n;
    factorial(n);
    return 0;
}