#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    
    int arr[n];
    
    cout << "Enter the sorted array with positive elements:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    bool flag = false; int miss=0;
    for (int i = 0; i < n - 1; i++)
    {
       if (arr[i + 1] != arr[i] + 1)
            {
                flag = true; miss=arr[i]+1;
                break;
            }
    }
        if (flag)
        {
            cout << miss<< " is missing" << endl;
        }
        else
        {
            cout << "there is no missing element";
        }
    
}