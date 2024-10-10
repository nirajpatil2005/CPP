#include <iostream>
#include<vector>
#include<list>
#include<queue>
#include<stack>
#include<climits>
#include<unordered_map>
#include<algorithm>
#include<map>
using namespace std;

int main()
{
    map<string,int>m;
    m["uk"]=60;
    m["china"]=150;
    m["india"]=150;
    m["us"]=50;
    m["nepal"]=10;
    cout<<m["nepal"]<<endl;
    for(pair<string,int>country:m)
    {
        cout<<country.first<<"-> "<<country.second<<endl;
    }

    return 0;
}