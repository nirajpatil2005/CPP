#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    cout<<"enter string:";
    string s;
    getline(cin,s);
    for(int i=0;i<s.size();i++)
    {
        if(i%2!=0)
        {
            s[i]='#';

        }
    }
     
    for(int i=0;i<s.size();i++)
    {
       cout<<s[i]<<" ";
    }
    
}

