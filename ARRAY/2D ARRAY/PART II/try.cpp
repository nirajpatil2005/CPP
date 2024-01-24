#include <iostream>
using namespace std;
void swap(int i, int j)
{
}
int main()
{
    int m, n;
    cout << "Enter rows of mat1: ";
    cin >> m;
    cout << "Enter columns of mat1: ";
    cin >> n;

    int a[m][n];
    cout << "Enter elements of mat1:" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    cout << "Display mat1:" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Printing matrix in wave form:" << endl;

    for (int i = 0; i < m; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < n; j++)
            {
                cout << a[i][j] << " ";
            }
        }
        else
        {
            for (int j = n; j > 0; j--)
            {
                cout << a[i][j] << " ";
            }
        }
        cout << endl;
    }
    cout << endl;
    cout << "practice 1:"<<endl;
    for (int i = 0; i < m; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = n - 1; j >= 0; j--)
            {
                cout << a[i][j] << " ";
            }
        }
        else
        {
            for (int j = 0; j < n; j++)
            {
                cout << a[i][j] << " ";
            }
        }
        cout << endl;
    }
    cout << endl;
    for (int j = 0; j < n; j++)
    {

        if (j % 2 == 0)
        {
            for (int i = 0; i < m; i++)
            {
                cout<<a[i][j]<<" "; 
            }
        }
        else{
             for (int i = m-1; i >=0; i--)
            {
                cout<<a[i][j]<<" "; 
            }
        }
          cout<<endl;
    }

    return 0;
}
