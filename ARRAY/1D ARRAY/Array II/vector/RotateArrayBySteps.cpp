#include <iostream>
#include <vector>
using namespace std;
void display(vector<int> &a)
{
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
void reversepart(int i, int j, vector<int> &b)
{
    while (i <= j)
    {
        int temp = b[i];
        b[i] = b[j];
        b[j] = temp;
        i++;
        j--;
    }
    cout << endl;
}

int main()
{
    vector<int> v;
  
    v.push_back(15);
    v.push_back(19);
    v.push_back(11);
    v.push_back(10);
    v.push_back(12);
    v.push_back(5);
    v.push_back(2);
     display(v);
       int k=2;
    int n = v.size() - 1;
    if(k>n+1)k=k%(n+1);
    reversepart(0, n - k, v);
    reversepart(n - k + 1, n, v);
    reversepart(0, n, v);
    display(v);

    return 0;
}
// 15 19 11 10 12 suppose k=2 ( 10 12 15 19 11)
    //   (0,n-k)
    // 11 19 15 10 12
    //  (k,n)
    //  11 19 15 12 10
    //(0,n)
    // 10 12 15 19 11