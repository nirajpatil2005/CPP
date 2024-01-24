#include <iostream>
using namespace std;
int main()
{
    int m, n;
    cout << "enter rows of matrix:";
    cin >> m;
    cout << "enter cols of matrix:";
    cin >> n;
 
    int a[m][n], b[m][n];
    cout<<endl<<"enter element of mat1:"<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
      cout<<endl<<"enter element of mat2:"<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>b[i][j];
        }
    }
       cout<<endl<<"enter element of mat1:"<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
                cout<<a[i][j]<<" ";
        }cout<<endl;
    }
      cout<<endl<<"mat2:"<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<b[i][j]<<" ";
        }cout<<endl;
    }
      cout<<endl<<"addition of mat1 and mat2:"<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            b[i][j]+=a[i][j];
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }

}
