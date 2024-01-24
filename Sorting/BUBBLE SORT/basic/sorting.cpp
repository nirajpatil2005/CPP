#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> v;
    for (int i = 0; i < 5; i++)
    {
        int q;
        cin >> q;
        v.push_back(q);
    }
    // sort(v.begin(),v.end());
    //  sort(v.end(),v.begin());//O(nlogn)
    for (int i = 0; i < 5; i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}