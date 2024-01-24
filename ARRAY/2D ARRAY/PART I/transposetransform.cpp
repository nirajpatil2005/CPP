#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter no of rows of matrix:";
    cin >> n;

    int mat[n][n];
    cout << "enter element of mat:" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> mat[i][j];
        }
        cout << endl;
    }

    cout << "displaying of mat:" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
           // swapping of i,j and j,i
                int temp = mat[i][j];
                mat[i][j] = mat[j][i];
                mat[j][i] = temp;
            
        }
        cout << endl;
    }
    cout << "transpose of matrix:" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}