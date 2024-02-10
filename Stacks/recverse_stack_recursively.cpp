#include <iostream>
#include <stack>
using namespace std;
void disrev_rec(stack<int> &st)
{
    if (st.size() == 0)
        return;
    int x = st.top();
    cout << x << " ";
    st.pop();
    disrev_rec(st);
    st.push(x);
}
void display(stack<int> &st)
{
    if (st.size() == 0)
        return;
    int x = st.top();
    st.pop();
    disrev_rec(st);
    cout << x << " ";
    st.push(x);
}
int main()
{
    stack<int> st;
    st.push(10);
    st.push(12);
    st.push(14);
    st.push(16);
    st.push(18);
    st.push(20);
    disrev_rec(st);
    return 0;
}