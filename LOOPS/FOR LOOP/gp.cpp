// #include<iostream>
// using namespace std;
// int main()
// {
//     //G.p
//     // formula= 
//     // an=a*r^(n-1)
//     // 1 2 4 8 16 ... ... .. ..
//     int i,n;
//     cout<<"enter no:";
//     cin>>n;
//     for(i=1;i<=2*n-2;i=i*2)
//     {
//         cout<<i<<endl;
//     }
// }

#include<iostream>
using namespace std;
int main()
{
    int i,n;
   unsigned int a=2;
    cout<<"enter no:"<<endl;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cout<<a<<endl;
    a=a*2;
    }


}