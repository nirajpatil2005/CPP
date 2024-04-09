#include <iostream>
using namespace std;
class queue
{
  public:
    int s;
    int* arr;  // Declare arr as a pointer
    int f = 0;
    int b = 0;

    queue(int size)
    {
        this->s = size;
        arr = new int[s];  // Allocate memory for arr
    }
    void push(int val)
    {
        if (s== b)
        {
            cout << "Queue is Full";
            return;
        }
        else
        {
            arr[b] = val;
            b++;
        }
    }
    void pop()
    {
        f++;
        display();
    }
    void display()
    {
        for (int i = f; i < b; i++)
        {
            cout << arr[i] << " ";
        }
    }
};
int main()
{
    int size;
    cout<<"Enter Size of Queue :";
    cin>>size;
    queue q(size);
    int ch;
    do
    {
        cout << "\n1->push element:\n2->pop element:\n3->exit\n";
        cout << "Enter Choice:";
        cin >> ch;
        if (ch == 1)
        {
            int val;
            cout << "Enter Value:";
            cin >> val;
            q.push(val);
            q.display();
        }
        else if (ch == 2)
        {
            q.pop();
        }
        else if (ch == 3)
        {
            cout << "exiting....";
        }
        else
        {
            cout << "Invalid Input!!!";
        }
    } while (ch != 3);
    return 0;
}