#include <iostream>
#include <vector>
using namespace std;
vector<int> merge(vector<int> &arr1, vector<int> &arr2)
{
    int n = arr1.size();
    int m = arr2.size();
    vector<int> res(m + n);
    int i = 0;
    int j = 0;
    int k = 0;
    while (i <n && j < m)
    {
        if (arr1[i] > arr2[j])
        {
            res[k] = arr2[j];
            j++;
            k++;
        }
        else
        {
            res[k] = arr1[i];
            i++;
            k++;
        }
     
    }
    if (i == n)
    {
        // arr1 ke saare element utha chuka hoon
        while (j < m)
        {
            res[k] = arr2[j];
            k++;
            j++;
        }
    }
    if (j == m)
    {
        // arr2 ke saare element utha chuka hoon
        while (i < n)
        {
            res[k] = arr1[i];
            k++;
            i++;
        }
    }
       return res;
}
int main()
{
    // int arr1[4]={1,4,5,8};
    vector<int> arr1;
    vector<int> arr2;
    arr1.push_back(1);
    arr1.push_back(4);
    arr1.push_back(5);
    arr1.push_back(8);
    for (int i = 0; i < arr1.size(); i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;
    // int arr2[6]={2,3,6,7,10,12};
    // int arr3[10];
    arr2.push_back(2);
    arr2.push_back(3);
    arr2.push_back(6);
    arr2.push_back(7);
    arr2.push_back(10);
    arr2.push_back(12);
    for (int i = 0; i < arr2.size(); i++)
    {
        cout << arr2[i] << " ";
    }
    cout << endl;
    vector<int> v = merge(arr1, arr2);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}