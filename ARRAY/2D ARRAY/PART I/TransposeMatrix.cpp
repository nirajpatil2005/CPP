#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cout << "enter no of rows of matrix:";
    cin >> n;
    cout << "enter no of columns of matrix:";
    cin >> m;
    int mat[n][m], trans[n][m];
    cout << "enter element of mat:" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mat[i][j];
        }
        cout << endl;
    }
   
    cout << "displaying of mat:" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
   cout<<"transpose of matrix:"<<endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << mat[j][i] << " ";
        }
        cout << endl;
    }

    return 0;
}