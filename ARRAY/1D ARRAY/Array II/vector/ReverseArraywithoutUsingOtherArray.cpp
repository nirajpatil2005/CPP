#include <iostream>
#include <vector>
using namespace std;
void display(vector<int> &a)
{
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
}
int main()
{

    vector<int> v;
    v.push_back(3);
    v.push_back(0);
    v.push_back(9);
    v.push_back(5);
    v.push_back(8); // 3 0 5 9 8
    display(v);
    cout << endl;
    int i = 0;
    int j = v.size() - 1;
    while (i <= j)
    {
        // swap
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }
    display(v);
    cout << endl;
    for (int i = 0, j = v.size() - 1; i <= j; i++, j--)
    {
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
    }
    display(v);
}