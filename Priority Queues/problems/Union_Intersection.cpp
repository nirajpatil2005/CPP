#include <iostream>
#include<vector>
#include<unordered_set>
using namespace std;
void Union(vector<int>arr1,vector<int>arr2)
{
    unordered_set<int>set;
    for(int ele:arr1)
    {
        set.insert(ele);
    }
    for(int ele:arr2)
    {
        set.insert(ele);
    }
    cout<<"union of sets :";
    for(int ele:set)
    {
        cout<<ele<<" ";
    }
}
void Intersection(vector<int>arr1,vector<int>arr2)
{
    unordered_set<int>set1;
    unordered_set<int>set2;
    for(int ele:arr1)
    {
        set1.insert(ele);
    }
    for(int i=0;i<arr2.size();i++)
    {
        if(set1.count(arr2[i]))
        {
            set2.insert(arr2[i]);
        }
    }
    cout<<"Intersection :";
    for(int ele:set2)
    {
        cout<<ele<<" ";
    }
}
int main()
{
    vector<int>arr1={7,3,9};
    vector<int>arr2={6,3,9,2,9,4};
    Union(arr1,arr2);cout<<endl;
    Intersection(arr1,arr2);
    return 0;
}