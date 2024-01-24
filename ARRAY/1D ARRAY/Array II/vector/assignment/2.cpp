//WAP to find the largest three elements in the array.
#include<iostream>
#include<climits>
#include<vector>
using namespace std;
void display(vector<int>&a)
{
    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<" ";
    }
    
}

int main()
{
    int n;
    cout<<"enter size of array:";
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        int q;
        cin>>q;
        v.push_back(q);
    }
    display(v);
    cout<<endl;
    int max=INT_MIN;
     int secmax=INT_MIN;
      int thirdmax=INT_MIN;
    for(int i=0;i<n;i++)
    {
       if(v[i]>max)
       {
        max=v[i];
       }
    }
      for(int i=0;i<n;i++)
    {
       if(v[i]>secmax && v[i]<max)
       {
        secmax=v[i];
       }
    }
      for(int i=0;i<n;i++)
    {
       if(v[i]>thirdmax && v[i]<secmax)
       {
        thirdmax=v[i];
       }
    }
    cout<<thirdmax<<" "<<secmax<<" "<<max;
}