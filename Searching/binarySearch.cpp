#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int lo = 0;
        int hi = nums.size() - 1;
        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            if (nums[mid] == target) return true;
            else if (nums[mid] > target) hi = mid - 1;
            else lo = mid + 1;
        }
        return false; // If target is not found
    }
};

int main() {
    Solution sy;
    vector<int> v = {-1, 0, 3, 5, 9, 12};
    bool found = sy.search(v, 0);
    if (found) cout << "Target found\n";
    else cout << "Target not found\n";
    return 0;
}
