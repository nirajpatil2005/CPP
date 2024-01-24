#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &v)
{
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}
int main()
{
    int n;
    vector<int> v;
    cout<<"enter size of array:";
    cin>>n;
    cout<<"enter element of an array:"<<endl;
    for(int i=0;i<n;i++)
    {
        int q;
        cin>>q;
        v.push_back(q);
    }
    display(v);
    int oddidx=0;
    int evenidx=0;
    for(int i=0;i<n;i++)
    {
        if(i%2!=0)
        {
            oddidx+=v[i];
        }
        else{
            evenidx+=v[i];
        }
    }
    cout<<endl;
    cout<<"addition of all odd indices is "<<oddidx<<endl;
    cout<<"addition of all even indices is"<<evenidx<<endl;
    cout<<"driffrence b/w them is "<<max(oddidx,evenidx)-min(oddidx,evenidx);




}