#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
   string s="AZYZXBDXJKY";
   string str;
   for(int i=0;i<s.length();i++)
   {
       if(s[i]>='X')
       {
            str.push_back(s[i]);
        }
    }
    // sort(str.begin(),str.end());
    cout<<str<<endl;
    for(int i=0;i<str.length()-1;i++)
    {   bool flag =true;
        for(int j=0;j<str.length()-1;j++)
        {
            if(str[j]>str[j+1])
            {
                flag=false;
                swap(str[j],str[j+1]);
            }
        }
        if(flag==true) break;
    }
    cout<<str;

}