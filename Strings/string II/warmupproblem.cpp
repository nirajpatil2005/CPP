#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    string s;
    int count=0;
    cout<<"enter string:";
    getline(cin,s);
    // cout<<s.size()<<endl;
    if(s.size()==1)
    {
    cout<<"count is 0";
        
    }
     
    else if(s.size()!=0)
    {
       for(int i=0;s[i]!='\0';i++)
       {
        if(i==0)
        {
            if(s[i]!=s[i+1])
            {
                cout<<s[i];
                count++;
            }
        }
        if(i!=0 && (s[i]!=s[i-1] && s[i]!=s[i+1]) &&i!=s.size()-1)
        {
                cout<<s[i];

            count++;
        }
        if(i==s.size()-1)
        {
            if(s[i]!=s[i-1])
            {
                cout<<s[i];
                count++;
            }
        }
    }
    }
  

}