#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    string s;
    cout << "enter even string:";
    getline(cin, s);

    if (s.size() % 2 == 0)
    {
        reverse(s.begin(), s.begin() + (s.size() / 2));
        cout << s;
    }
    else
    {
        cout << "enter valid string"<<endl;
        cout << "enter even string:";
        getline(cin, s);
        cout<<endl;
        if (s.size() % 2 == 0)
        {
            reverse(s.begin(), s.begin() + (s.size() / 2));
            cout << s;
        }
    }
}
