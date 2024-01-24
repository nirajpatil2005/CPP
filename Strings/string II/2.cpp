#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
bool isconsonant(char ch)
{
    if(ch<65) return false;
    else if(ch>90 && ch<97) return false;
    else if(ch>122) return false;
    else if(ch=='a'||ch=='A' || ch=='e'||ch=='E' || ch=='i'||ch=='I' || ch=='o'||ch=='O' || ch=='u'||ch=='U')
{
    return false;
}
return true;
}
int main()
{
    cout << "enter string:";
    string s;
    getline(cin, s);
    int count=0;
    for (int i = 0; i < s.size(); i++)
    {
       if(isconsonant(s[i]))  count++;
    }
    cout<<"no of consants is "<<count;

    // for (int i = 0; i < s.size(); i++)
    // {
    //     cout << s[i] << " ";
    // }
}
