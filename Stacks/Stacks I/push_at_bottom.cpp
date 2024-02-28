#include <iostream>
#include <stack>
using namespace std;
void display(stack<int> &st)
{
    stack<int> temp;
    while (st.size() > 0)
    {
        temp.push(st.top());
        st.pop();
    }
    while (temp.size() > 0)
    {
        cout << temp.top() << " ";
        st.push(temp.top());
        temp.pop();
    }
}
void pushAtBottom(stack<int> &st,int ele)
{
    stack<int> temp;
    while(st.size()>0)
    {
        temp.push(st.top());
        st.pop();
    }
    temp.push(ele);
    while(temp.size()>0)
    {
        st.push(temp.top());
        temp.pop();
    }
  
}
int main()
{
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    display(st);
    cout<<endl;
    pushAtBottom(st,80);
    display(st);


    return 0;
}