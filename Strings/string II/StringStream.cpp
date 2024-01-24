#include<iostream>
#include<cstring>
#include<sstream>
using namespace std;
int main()
{
    string s="panda is a cute";
    // cout<<"enter string:";
    // getline(cin,s);
    stringstream ss(s);
    string temp;
    while(ss>>temp)    
    {
        cout<<temp<<endl;
    }
}