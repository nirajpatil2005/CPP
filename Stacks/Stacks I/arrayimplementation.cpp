#include <iostream>
using namespace std;
class stack
{
    public:
    int arr[5];
    int idx=-1;
    void push(int val)
    {
        idx++;
        arr[idx]=val;
    }
    void pop()
    {
        idx--;
        if(idx<0)return;
    }
    int top()
    {
        if(idx==-1)
        {
            cout<<"array is empty";
            return -1;
        }
        return arr[idx];
    }
    void display()
    {
        if(idx==-1)return;
        int x=arr[idx];
        idx--;
        display();
        cout<<x<<" ";
        push(x);
    }
    int size()
    {
        int size=idx+1;
        return size;
    }

};
int main()
{
    stack st;
    st.push(12);
    st.push(16);
    st.push(18);
    st.push(14);
    st.push(19);
    st.display();
    cout<<endl<<st.size()<<endl;
    st.pop();
    st.display();
    return 0;
}