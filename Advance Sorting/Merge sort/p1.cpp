#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int>&a,vector<int>&b,vector<int>&res)
{
    int i=0;
    int j=0;
    int k=0;
    while(i<a.size() && j<b.size())
    {
        if(a[i]<=b[j])
        {
            res[k++]=a[i++];
        }
        else
        {
            res[k++]=b[j++];
        }
    }
    if(i==a.size())
    {
        while(j<b.size())
        {
            res[k++]=b[j++];
        }
    }
    if(i==b.size())
    {
        while(i<a.size())
        {
            res[k++]=a[i++];
        }
    }
}
void mergeSort(vector<int>&vec)
{
    int n=vec.size();
    if(n==1)return;
    int n1=n/2;
    int n2=n-n/2;
    vector<int> a(n1),b(n2);
    for(int i=0;i<n1;i++)
    {
        a[i]=vec[i];
    }
    for(int i=0;i<n2;i++)
    {
        b[i]=vec[i+n1];
    }
    mergeSort(a);
    mergeSort(b);
    merge(a,b,vec);
    a.clear();
    b.clear();
}
int main()
{
    vector<int>a={1,3,5,7,9,11};
    vector<int>b={2,4,6,8,10};
    vector<int>res(a.size()+b.size());
    merge(a,b,res);
    for(int i=0;i<res.size();i++)
    {
        cout<<res[i]<<" ";
    }
    cout<<endl;
    vector<int>vec={12,234,45,54,2,45,78,90};
    mergeSort(vec);
    for(int ele:vec)
    {
        cout<<ele<<" ";
    }

}