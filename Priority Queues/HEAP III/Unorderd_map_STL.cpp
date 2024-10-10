#include <iostream>
#include<vector>
#include<list>
#include<queue>
#include<stack>
#include<climits>
#include<unordered_map>
#include<algorithm>
using namespace std;

int main()
{
    unordered_map<string,int>m;
    m["china"]=150;
    m["india"]=150;
    m["us"]=50;
    m["nepal"]=10;
    cout<<m["nepal"]<<endl;
    for(pair<string,int>country:m)
    {
        cout<<country.first<<"-> "<<country.second<<endl;
    }

    if(m.count("nepal"))//search
    {
        cout<<"nepal exists"<<endl;
    }
    else cout<<"nepal doesnt exists";

    m.erase("nepal");

      if(m.count("nepal"))//search
    {
        cout<<"nepal exiats";
    }
    else cout<<"nepal doesnt exists";
    return 0;
}