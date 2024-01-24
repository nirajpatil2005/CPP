#include <iostream>
using namespace std;
int main()
{
    int m, n;
    cout << "enter rows of mat1: ";
    cin >> m;
    cout << "enter cols of mat1: ";
    cin >> n;
    int a[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << "mat1:" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    int r1, r2, c1, c2;
    cout << "enter coordinates for sum:";
    cin >> r1 >> c1;
    cout << "enter coordinates for sum:";
    cin >> r2 >> c2;
    int sum=0;
    for(int i=r1;i<=r2;i++)
    {
        for(int j=c1;j<=c2;j++)
        {
            sum+=a[i][j];
        }
    }
    cout<<endl<<"sum of matrix: "<<sum;
}