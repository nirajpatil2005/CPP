#include <iostream>
using namespace std;

int pow(int a, int b) {
    if (b == 0)
        return 1;
    
    int temp = pow(a, b / 2);
    
    if (b % 2 == 0)
        return temp * temp;
    else
        return a * temp * temp;
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << pow(a, b);
    return 0;
}
