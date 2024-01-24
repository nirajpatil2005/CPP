#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cout << "enter no of rows of matrix:";
    cin >> n;
    cout << "enter no of columns of matrix:";
    cin >> m;
    int mat1[n][m], mat2[n][m];
    cout << "enter element of mat1:" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mat1[i][j];
        }
        cout << endl;
    }
    cout << "enter element of mat1:" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mat2[i][j];
        }
        cout << endl;
    }
    cout << "displaying of mat1:" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << mat1[i][j] << " ";
        }
        cout << endl;
    }
    cout << "displaying of mat2:" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << mat2[i][j] << " ";
        }
        cout << endl;
    }
    cout << "addition of matrix:" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << (mat1[i][j] + mat2[i][j]) << " ";
        }
        cout << endl;
    }

    return 0;
}