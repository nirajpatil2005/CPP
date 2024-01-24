#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main()
{
    vector<int> v;
    int n;
    int x=INT_MIN;
    cout<<"enter element above which greater no to find:";
    cin>>x;

    cout<<"enter size of array";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int q;
        cin>>q;
        v.push_back(q);
    }
    int count=0;
    bool flag="false";
    for(int i=0;i<n-1;i++)
    {
        if(v[i]>x)
        {
            cout<<v[i]<<"is greater than"<<x<<"having index "<<i<<endl;
        }
        else{
            flag=false;
        }
    }
    if(flag==false)
    {
        cout<<"no no is greater than "<<x;
    }
}