#include <iostream>
using namespace std;
void display(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        cout << arr[i] << " ";
    }
}
void change(int b[], int size)
{
    b[0] = 100;
}
int main()
{
    int arr[5] = {1, 4, 2, 7, 46};
    int size = sizeof(arr) / sizeof(arr[0]);
    // acessing the elements of array in another function
    // updation,pass by value/refrerence? ans:-> reference;
    display(arr, size);
    change(arr, size);
    cout << endl;
    display(arr, size);
    cout << size;
}