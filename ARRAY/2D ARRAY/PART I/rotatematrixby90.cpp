#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    int t[3][3];
    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
        {
            t[i][j] = arr[j][i];
            cout << t[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl
         << "rotate matrix by 90" << endl;
    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
        {
            int temp = t[i][j] ;
           t[i][j]  = t[i][2-j];
            t[i][2-j] = temp;
            cout << t[i][j] << " ";
        }
        cout << endl;
    }
}