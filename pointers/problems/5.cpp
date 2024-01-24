#include<iostream>
using namespace std;
// void(int* n,int* r)
// {
//     cout<<((*n)*(*r));

// }
int main()
{
    int no1,no2;
    cout<<"enter no1 and no2:";
    cin>>no1>>no2;
    int* n=&no1;
    int* r=&no2;
   // product(n,r);
   cout<<"product:"<<*n**r<<endl;
    return 0;
}