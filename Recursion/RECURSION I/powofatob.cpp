#include <iostream>
using namespace std;
// int power(int a, int b)
// {
//     int f = 1;
//     for (int i = 0; i < b; i++)
//     {
//         f *= a;
//     }
//     return f;
// }
int pow(int a,int b)
{
    if(b==0)return 1;
    return a*pow(a,b-1);

}
int main()
{ 
    int a;
    cout<<"enter base:";
    cin>>a;
    cout<<"enter power:";
    int b;
    cin>>b;
    // cout << power(-20, 3);
    cout<<pow(a,b);
    return 0;
}