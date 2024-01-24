#include<iostream>
using namespace std;
int main()
{
    // int x,y,z;
    // cout<<"enter no:";
    // cin>>x>>y>>z;
    // if(x>y )
    // {
    //     if(x>z)
    //     {
    //         cout<<"no is"<<x<<"is greater";
    //     }
    //     else
    //     {
    //         cout<<"";
    //     }
    // }
    // else if(y>x)
    // {
    //     if(y>z)
    //     {
    //         cout<<"no is"<<y<<"is greater";
    //     }

    // }
    // else
    // {
    //     cout<<"no is "<<z<<"is grater";
    // }

    int a,b,c;
    
    cout<<"enter 1st no:";
    cin>>a;
    cout<<"enter 2nd no:";
    cin>>b;
    cout<<"enter 3rd no:";
    cin>>c;
    if(a>b)
    {
        if(a<c)
        {
            cout<<a<<"is greatest integer";
        }
        else
        {
            cout<<c<<"is greatest integer";
        }
        }
        else if(b>c)
         {
        if(b>a)
        {
            cout<<b<<"is greatest integer";
        }
        else
        {
            cout<<a<<"is greatest integer";
        }
         }
        else{
        cout<<c<<"is graetest int";
        }
        }
    
    


    

