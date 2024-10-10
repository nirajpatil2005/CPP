#include <iostream>
#include <vector>
#include <list>
#include <queue>
#include <stack>
#include <climits>
#include <algorithm>
#include <unordered_set>
#include<set>
using namespace std;

int main()
{
    set<int> s;
    s.insert(1);
    s.insert(10);
    s.insert(12);
    s.insert(14);
    s.insert(15);
    s.insert(15);
    s.insert(16);
    s.insert(18);
    s.insert(11);
    cout << s.size() << endl;

    if (s.find(3) != s.end())
    {
        cout << "3 exists" << endl;
    }
    else
        cout << "3 not exists" << endl;
    for (auto ele : s)
    {
        cout << ele << " ";
    }

    return 0;
}