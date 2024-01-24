#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    string s;
    cout << "Enter string: ";
    getline(cin, s);

    sort(s.begin(), s.end());
    cout << s << endl;

    int count = 1;
    int maxCount = 1;
    char mostOccurringElement = s[0];

    for (int i = 1; i < s.size(); i++) {
        if (s[i] == s[i - 1]) {
            count++;
        } else {
            count = 1;
        }

        if (count > maxCount) {
            maxCount = count;
            mostOccurringElement = s[i];
            cout << "Most occurring element is: " << mostOccurringElement << " with count: " << maxCount << endl;

        }

    }

    
    return 0;
}
