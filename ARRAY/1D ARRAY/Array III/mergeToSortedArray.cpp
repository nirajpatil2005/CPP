#include <iostream>
#include <vector>
using namespace std;
void display(vector<int> &a)
{
    int n = a.size();
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
vector<int> sort(vector<int> &v1, vector<int> &v2)
{
    int n = v1.size();
    int m = v2.size();
    vector<int> res(n + m);
    int i = n - 1;
    int j = m - 1;
    int k = (n + m) - 1;
    while (i >= 0 && j >= 0)
    {
        if (v1[i] > v2[j])
        {
            res[k] = v2[j];
            k--;
            j--;
        }
        else
        {
            res[k] = v1[i];
            i--;
            k--;
        }
    }
   
        while (j >= 0)
        {
            res[k] = v2[j];
            j--;
            k--;
        }
    
   
        while (i >= 0)
        {
            res[k] = v1[i];
            i--;
            k--;
        }
    
    return res;
}
int main()
{
    vector<int> v1, v2;
    v1.push_back(1);
    v1.push_back(3);
    v1.push_back(5);
    v1.push_back(7);
    v1.push_back(6);
    v2.push_back(2);
    v2.push_back(4);
    v2.push_back(0);
    display(v1);
    display(v2);
    vector<int> v = sort(v1, v2);
    display(v);
    return 0;
}
