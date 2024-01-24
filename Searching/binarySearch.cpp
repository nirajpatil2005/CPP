#include<iostream>
#include<vector>
using namespace std;
  class Solution {
public:
    int search(vector<int>& nums, int target) {
        //nums = [-1,0,3,5,9,12], target = 9
        int lo=0;
        int hi=nums.size()-1;
        while(lo<=hi)
        {
            int mid=(hi+lo)/2;
            if(nums[mid]==target) return true;
            else if(nums[mid]>target) hi=mid-1;
            else lo=mid+1;
             }
           
    }
} ;
int main()
{
    Solution sy;
  vector<int> v={-1,0,3,5,9,12};
  sy.search(v,0);
}