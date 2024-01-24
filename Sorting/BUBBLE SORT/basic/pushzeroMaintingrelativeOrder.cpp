#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void display(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}
int main()
{
    vector<int> v = {5, 0, 1, 2, 0, 0, 4, 0, 3};
    // 5 1 2 4 3  0 0 0 0 
    display(v);
    cout << endl;
    for (int i = 0; i < v.size() - 1; i++)
    {
        bool flag=true;
        for (int j = 0; j < v.size() - 1-i; j++)
        {
            if (v[j]==0)
            {
                flag=false;
                swap(v[j],v[j+1]);
            }
        }if(flag==true) break;
    }
    display(v);
}