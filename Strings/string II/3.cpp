#include <iostream>
#include <cstring>
using namespace std;
bool isPalindrome(string s)
{
    int i = 0;
    int j = s.size() - 1;
    while (i <= j)
    {
        if (s[i] != s[j])
            return false;
        i++;
        j--;
    }
    return true;
}
int main()
{
    string s;
    cout << "enter string:";
    getline(cin, s);
    if (isPalindrome(s) == true)
    {
        cout << "string is palindrome";
    }
    else
    {
        cout << "string is not palindrome";
    }
}