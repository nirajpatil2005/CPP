#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    // string s="robin hood";
    // cout<<s<<endl;
    // cout<<s.substr(2)<<endl;
    //     cout<<s.substr(4);
    // string str="enteryourstring";
    // cout<<str.substr(2,5);
    cout<<"enter string:";
    string str;
    getline(cin,str);
   
    if(str.size()%2==0)
    {
        cout<<str.substr((str.size()/2),str.size()) ;
    }
    else
    {
        cout<<"nikal laude";
    }






}