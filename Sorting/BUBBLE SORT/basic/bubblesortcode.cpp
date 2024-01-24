#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n = 6;
    int arr[6] = {5, 4, 0, 30, -4, 1};
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
    // bubble sort
    // for (int i = 0; i < n - 1 ; i++) // n-1 passes
    // {
    //     for (int j = 0; j < n - 1-i; j++)
    //     {
    //         if (arr[j] > arr[j + 1])
    //         {
    //             swap(arr[j], arr[j + 1]);
    //         }
    //     }
    // }
   //  bubble sort optimized
    for (int i = 0; i < n - 1 ; i++) // n-1 passes
    {   bool flag=true;
        for (int j = 0; j < n - 1-i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                flag=false;
                swap(arr[j], arr[j + 1]);
            }
        }
        if(flag==true) break;//swap didnt happen
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}