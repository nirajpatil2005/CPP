#include <iostream>
using namespace std;
int main()
{
    int m;
    cout << "enter rows of 1st matrix:";
    cin >> m;
    int n;
    cout << "enter columns of 1sts matrix:";
    cin >> n;
    int p;
    cout << "enter rows of 2nd matrix:";
    cin >> p;
    int q;
    cout << "enter columns of 2nd matrix:";
    cin >> q;
    if (n == p)
    {
        int a[m][n];
        int b[p][q];
        cout << "enter element of 1st matrix:";
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
            }
            cout << endl;
        }
        cout << "enter element of 2nd matrix:";
        for (int i = 0; i < p; i++)
        {
            for (int j = 0; j < q; j++)
            {
                cin >> b[i][j];
            }
            cout << endl;
        }

        cout << "display 1st matrix:"<<endl;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
        cout << "display  2nd matrix:"<<endl;
        for (int i = 0; i < p; i++)
        {
            for (int j = 0; j < q; j++)
            {
                cout << b[i][j] << " ";
            }
            cout << endl;
        }
        // resultant matrix
        int res[m][q];
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                // multiply
                res[i][j]=0;
                for(int k=0;k<p;k++)
                {
                    res[i][j]+=a[i][k]*b[k][j];
                }
            }
        }
        cout<<"multiplied matrix:"<<endl;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<q;j++)
            {
                cout<<res[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    //res[i][j]=a[i][0]*b[0][j]+a[i][1]*b[1][j]+a[2][1]*b[][j]

    else
    {
        cout << "the matrix cannot be multiplied";
    }
    return 0;
}