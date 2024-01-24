#include <iostream>
using namespace std;

void prime() {
    cout << "\nPrime numbers between 1 to 100:" << endl;

    for (int i = 2; i <= 100; i++) {
        bool isPrime = true;

        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime=true) {
            cout << i << " is prime" << endl;
        }
    }
};

int main() {
    prime();
    return 0;
}
