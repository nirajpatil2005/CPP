#include <iostream>
#include <vector>
using namespace std;
int main()
{

    vector<int> v;

    v.push_back(3);
    v.push_back(0);
    v.push_back(9);
    v.push_back(5);
    v.push_back(8);
    v.push_back(8);
    cout<<v.size()<<" "<<v.capacity()<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }cout<<endl;
    v.pop_back();
    cout<<v.size()<<" "<<v.capacity()<<endl;

    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }
    return 0;
}