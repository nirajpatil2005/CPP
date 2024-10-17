#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int largestSubWithSum(vector<int> arr) {
    unordered_map<int, int> map; // sum, index
    int sum = 0;
    int ans = 0;

    for (int j = 0; j < arr.size(); j++) {
        sum += arr[j];

        //If the sum is 0, it means the subarray from index 0 to j has sum 0
        if (sum == 0) {
            ans = j + 1;
        }

        // If the sum has been seen before, calculate the length of the subarray
        if (map.count(sum)) {
            int currLen = j - map[sum];
            ans = max(ans, currLen);
        } 
        // If the sum is seen for the first time, store the index
        else {
            map[sum] = j;
        }
    }
    return ans;
}

int main() {
    vector<int> arr = {15, -2,2, -8, 1, 7, 10};
    cout << "Largest subarray with sum 0: ";
    cout << largestSubWithSum(arr) << endl;
    return 0;
}
