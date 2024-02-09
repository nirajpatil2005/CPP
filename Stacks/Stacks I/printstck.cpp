#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;
int main()
{
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(60);
    st.push(50);
    // st.push(40);
    // st.pop();
    st.push(100);
    // cout << st.size() << endl;
    // cout << st.top() << endl;
    // while (st.size() > 0)
    // {
    //     cout << st.top() << " ";
    //     st.pop();
    // }

    // we will use extra stack
    stack<int> temp;
    while (st.size() > 0)
    {
        cout << st.top() << " ";
        int x = st.top();
        st.pop();
        temp.push(x);
    }
    cout << endl;
    while (temp.size() > 0)
    {
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << endl;
    while (temp.size() > 0)
    {
        temp.pop();
        cout << temp.top() << " ";
    }

}