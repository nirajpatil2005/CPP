#include <iostream>
#include<unordered_map>
#include<vector>
using namespace std;
void majorityElem(vector<int>&arr)
{
    unordered_map<int,int>map(arr.size());
                //idx,freq
    for(int ele:arr)
    { 
        if(map.count(ele))
        {
            map[ele]++;
        }
        else
        {
            map[ele]=1;
        }
    }
    for(auto ele:map)
    {   
        
        cout<<ele.first<<" : "<<ele.second<<endl; 
    }
    for(pair<int,int>ele:map)
    {
        if(ele.second>arr.size()/3)
        {
            cout<<"Majority Element: "<<ele.first<<": "<<ele.second;
        }
    }
}
int main()
{
    vector<int> arr={1,3,2,5,1,3,1,5,1};
    unordered_map<int,int>map;
    majorityElem(arr);
    return 0;
}