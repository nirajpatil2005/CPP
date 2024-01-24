#include<iostream>
using namespace std;
int maxthree(int a,int b,int c)
{   int max;
    if(a>b && a>c)
    {
        //max=a;
        return a;
    }
    else if(b>a && b>c)
    {
        //max=b;
        return b;
    }
    else
    {
       // max=c;
       return c;
    }
    //return max;

}
int main()
{   int a,b,c;
    cout<<"enter vale of a,b and c :";
    cin>>a>>b>>c;
    cout<<maxthree(a,b,c);
}