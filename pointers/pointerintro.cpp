#include <iostream>
using namespace std;
int main()
{
    //  int x=4;
    //  int* p=&x;
    //  cout<<&x<<endl;
    //  cout<<p;
    // float x;
    // float* p=&x;
    // cout<<&x<<endl<<p;
    int y = 5;
    int *x = &y; // x stores adresss of y var;
    // int *x=&y;
    cout << "y:" << y << endl
         << "*x:" << *x << endl
         << "address of x:" << x << endl; //*x gives value of y;
    *x = 9;                               // changing the value of y var using pointer;
    cout << "y:" << y << endl
         << "*x:" << *x << endl;

    return 0;
}
