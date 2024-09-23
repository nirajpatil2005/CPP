#include <iostream>
#include <vector>

using namespace std;

// Function to rank the elements in descending order
void rankArray(const vector<int>& arr, vector<int>& rank) {
    int n = arr.size();

    for (int i = 0; i < n; i++) {
        int r = 1; // Rank starts from 1
        for (int j = 0; j < n; j++) {
            if (arr[j] > arr[i]) {
                r++;
            }
        }
        rank[i] = r;
    }
}

int main() {
    // Example array
    vector<int> arr = {50, 30, 40, 10, 20};
    int n = arr.size();
    
    // Vector to store ranks
    vector<int> rank(n);

    // Rank the array
    rankArray(arr, rank);

    // Print the ranked elements
    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\nRank of elements: ";
    for (int i = 0; i < n; i++) {
        cout << rank[i] << " ";
    }
    cout << endl;

    return 0;
}
