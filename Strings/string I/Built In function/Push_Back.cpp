#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str = "Fuck your ugly bitch!";
    cout << str << endl;
    str.push_back('e');
    str.push_back('e');
    str.push_back('e');
    str.push_back('e');
    cout << str << endl;
    str.pop_back();
    str.pop_back();
    str.pop_back();
    str.pop_back();
    str.pop_back();
    str.pop_back();
    cout << str << endl;
}
