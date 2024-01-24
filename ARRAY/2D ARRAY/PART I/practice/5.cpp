#include <iostream>
using namespace std;
int main()
{
    int m, n;
    cout << "enter rows of mat:";
    cin >> m;
    cout << "enter cols of mat:";
    cin >> n;
    int a[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << "dispkay matrix:" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout<<"element of mid col of mat1:";
    for(int i=0;i<m;i++)
    {
        for(int j=n/2;j<(n/2)+1;j++)
        {
            cout<<a[i][j]<<" ";
        }
    }
    cout<<endl;
      cout<<"element of mid row of mat1:";
    for(int i=n/2;i<(n/2)+1;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<a[i][j]<<" ";
        }
    }
}