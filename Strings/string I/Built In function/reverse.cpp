#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
    string s="batman!! I am vegenance!!";
    cout<<s;
    reverse(s.begin(),s.end());
    cout<<endl<<s<<endl;
    string str="abcdef";
    reverse(str.begin()+2,str.end()-0);
    cout<<str<<endl;
    reverse(str.begin()+2,str.begin()+4);




}