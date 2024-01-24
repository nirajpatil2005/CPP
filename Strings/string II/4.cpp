#include<iostream>
using namespace std;
void reversepart(string &s)
{   
    int j=s.size()-1;
    int h=(s.size()/2);
    while(h<=j)
    {
        char temp=s[h];
        s[h]=s[j];
        s[j]=temp;
        h++;
        j--;
     }
}
int main()
{
    string s;
    cout<<"enter string:";
    getline(cin,s);
    if(s.size()%2==0)
    {
        reversepart(s);
        cout<<"reverse part of string is "<<s;   
         }
    else
    {
        cout<<"enter even string"; 
    }
    return 0;
}