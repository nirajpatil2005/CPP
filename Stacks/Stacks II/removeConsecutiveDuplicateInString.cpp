#include <iostream>
#include <stack>
#include<algorithm>
using namespace std;
string removedup(string s)
{
    stack<char> st;
    for (int i = 0; i < s.length(); i++)
    {
        if (i == 0 || s[i] != s[i - 1])
        {
            st.push(s[i]);
        } 
    }
    string str="";
     while(st.size()!=0)
     {
        str+=st.top();
        st.pop();
     }
     reverse(str.begin(),str.end());
     return str;
}
int main()
{
    string s = "aabbccdd";
    cout<<removedup(s);
    return 0;
}