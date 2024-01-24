#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(18);
    v.push_back(15);
    v.push_back(14);
    v.at(2) = 90;

    // cout << v.at(2);
for(int i=0;i<v.size();i++)
{
    cout<<v.at(i)<<" ";
}

cout<<endl;
//sor
sort(v.begin(),v.end());
for(int i=0;i<v.size();i++)
{
    cout<<v.at(i)<<" ";
}
cout<<endl;

}