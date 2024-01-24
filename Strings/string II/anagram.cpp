#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    string s1,s2;
    cout<<"enter string1:";
    getline(cin,s1);
    sort(s1.begin(),s1.end());
  
    cout<<"enter string2:";
    getline(cin,s2);
   sort(s2.begin(),s2.end());
 
    if(s1==s2)
    {
        cout<<"both string are anagram of each pther";
    }
    else{
        cout<<"false";
    }


    
}

