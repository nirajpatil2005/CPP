#include <iostream>
using namespace std;
int main()
{
    int arr[3][3] = {{13, 24, 36}, {48, 50, 60}, {72, 80, 93}};
    // rows -> 0-2
    // columns-> 0-2
    // elements=3*3=9
    // cout << arr[0][0] << " ";
    // cout << arr[0][1] << " ";
    // cout << arr[0][2] << endl;
    // cout << arr[1][0] << " ";
    // cout << arr[1][1] << " ";
    // cout << arr[1][2] << endl;
    // cout << arr[2][0] << " ";
    // cout << arr[2][1] << " ";
    // cout << arr[2][2] << endl;
    cout<<endl;
    for(int i=0;i<=2;i++)
    {
        for(int j=0;j<=2;j++)
        {
         cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}