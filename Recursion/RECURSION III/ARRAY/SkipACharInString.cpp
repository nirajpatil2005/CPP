#include <iostream>
#include<string>
using namespace std;

int main()
{
    string str = "NIRAJ PATIL";
    string s = "";
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] != 'A')s=s+str[i];
    }
    cout<<s<<endl;
    return 0;
}