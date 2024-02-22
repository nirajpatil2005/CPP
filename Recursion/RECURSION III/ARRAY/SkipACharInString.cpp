#include <iostream>
#include <string>
using namespace std;
// void removechar(string ans, string original)
// {
//     if (original.length() == 0)
//     {
//         cout << ans;
//         return;
//     }
//     char ch = original[0];
//     if (ch == 'A')
//         removechar(ans, original.substr(1));
//     else
//         removechar(ans + ch, original.substr(1));
// }
void removechar(string ans, string original,int idx)
{
    if (idx==original.length())
    {
        cout << ans;
        return;
    }
    char ch = original[idx];
    if (ch == 'A')
        removechar(ans, original,idx+1);
    else
        removechar(ans + ch, original,idx+1);
}
int main()
{
    string str = "NIRAJ PATIL";
    string s = "";
    // for (int i = 0; i < str.length(); i++)
    // {
    //     if (str[i] != 'A')s=s+str[i];
    // }
    // cout<<s<<endl;
    // removechar("", str);
    removechar("",str,0);
    return 0;
}