#include <iostream>
#include<climits>
using namespace std;
int main()
{
    int n, m;
    cout << "enter rows of mat1:";
    cin >> m;
    cout << "enter cols of amt:";
    cin >> n;
    int a[m][n];
    cout << "enter element of mat:" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
        cout << endl;
    }
    cout << endl
         << "mat1:" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
  
    }
    int row = -1;
    int sum = 0;
    int max = INT_MIN;
    cout << "row having maximum sum element:";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            sum += a[i][j];
        }
        if (sum > max)
        {
            row = i;
        }
    }
        cout << row;
    }