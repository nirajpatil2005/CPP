#include <iostream>
#include<vector>
using namespace std;
class stack
{
    public:
    vector<int> v;
    int idx=-1;
    void push(int val)
    {
      v.push_back(val);
    }
    void pop()
    {
        if(v.size()==0)
        {
            cout<<"stack is empty!!";
            return;
        }
       v.pop_back();
    }
    int top()
    {
        return v[v.size()-1];
    }
    void display()
    {
       for(int i=v.size()-1;i>=0;i--)
       {
        cout<<v[i]<<" ";
       }
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
    cout<<endl<<st.top();
    cout<<endl<<st.size()<<endl;
    st.pop();
    st.display();
    return 0;
 }