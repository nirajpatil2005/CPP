#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    string s;
    cout << "enter string:";
    getline(cin, s);

    int n = s.size();
    int no = 0;
    for (int i = 0; i <n; i++)
    {
        no *= 10;
        no += (s[i] - 48); // s[i] is char
    }
    cout << no ;
}