#include<iostream>
using namespace std;
void skipchar(string &s,string news,char ch,int idx)
{
    if(idx==s.size()){
        cout<<news;
        return;
    }
    // if(s[idx]!=ch)
    // {
    //     news+=s[idx];
    // }
   if(s[idx]!=ch) skipchar(s,news+s[idx],ch,idx+1);
   else return skipchar(s,news,ch,idx+1);
}
void skipch(string& s,char ch,int idx)
{
    if(idx==s.size())return;
    if(s[idx]!=ch)
    {
        cout<<s[idx]<<"";
    }
    skipch(s,ch,idx+1);
}
int main()
{
    string s="NIRAJ PATIL";
    string news="";
    skipchar(s,news,'A',0);
    cout<<endl;
    skipch(s,'I',0);
    cout<<endl<<s;
}
