#include <iostream>
using namespace std;
int main()
{
    // data structure-> storage to store data
    int x[7]; // declaration
    x[1] = 1;
    x[2] = 3;
    x[3] = 8;
    x[4] = 0;
    x[5] = 2;
    x[6] = 9;
    x[0] = 90;
    x[7] = 98;

    for (int i = 0; i <= 7; i++)
    {
        cout << "x[" << i << "] = " << x[i] << endl;
    }
    return 0;
}