#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    cout << "adress of arr:" << &arr << " " << endl
         << "size of arr:" << sizeof(arr) << endl;
    for (int i = 0; i <= 10; i++)
    {
        cout << "arr[" << i << "] = " << &arr[i] << endl;
    }
    cout<<arr;
    return 0;
}