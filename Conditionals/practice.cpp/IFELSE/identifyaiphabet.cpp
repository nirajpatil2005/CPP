#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"enter charecter:";
    cin>>ch;
    int n=(int)ch;
    if(n>=65 && n<=90)
    {
        cout<<"charecter are uppercase";
    }
    else if(n>=97 && n<=122)
    {
        cout<<"charecters are lowercase \n";
    }
    else
    {
            cout<<"these are not alphabet";
    }
    return 0;

}