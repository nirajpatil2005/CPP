#include <iostream>
#include <stack>
using namespace std;
int main()
{
    int arr[] = {3, 1, 2, 7, 4, 6, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int nge[n];
    nge[n-1]=-1;
    stack<int>st;
    for(int i=n-1;i>=0;i--)
    {
        while(st.size()>0 && st.top()<=arr[i])
        {
            st.pop();
        }
        //mark the ans in nge array
        if(st.size()==0)nge[i]=-1;
        else nge[i]=st.top();
        st.push(arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        cout<<nge[i]<<" ";
    }
    cout<<endl;
    return 0;
}