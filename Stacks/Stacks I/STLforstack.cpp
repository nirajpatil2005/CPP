#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;
int main()
{
    stack<int> st;
    // cout << st.size() << endl;
    st.push(10);
    // cout << st.size() << endl;
    st.push(20);
    st.push(60);
    st.push(50);
    st.push(40);
    // cout << st.size() << endl;
    st.pop();
    st.push(100);
    cout << st.size() << endl;
    cout << st.top() << endl;
    //printing stacks in reverse order->emptying the stack
    
    while(st.size()>0)
    {
        cout<<st.top()<<" ";
        st.pop();
        //t ot rempve top element/last element
    }




}