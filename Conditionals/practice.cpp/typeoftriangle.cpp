#include<iostream>
using namespace std;
int main()
{
    int l,m,n;
    cout<<"enter lengths of triangle :";
    cin>>l>>m>>n;

    if(l==m && m==n)
    {
        cout<<"triangle is equilateral";
    }
 
    else if((l!=m) && (m!=n) &&(l!=n))
    {
        cout<<"triangle is scalene";
    }
     else 
    {
        cout<<"triangle is isosceles";
    }
}