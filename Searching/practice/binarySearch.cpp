#include <iostream>
#include<vector>
using namespace std;
int binarySearch(vector<int>&v,int tar)
{
    int low=0;
    int high=v.size()-1;
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        if(v[mid]==tar)return mid;
        else if(tar>v[mid])low=mid+1;
        else high=mid-1;//tar<v[mid]
    
    }
    return -1;
}
int main()
{
    vector<int>v={12,234,456,5678,67890,123456};
    int tar=12;
    cout<<binarySearch(v,tar);
    return 0;
}