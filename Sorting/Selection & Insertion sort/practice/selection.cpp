#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
void selection_sort(vector<int>&v)
{
    for(int i=0;i<v.size()-1;i++)
    {
        int min=INT_MAX;
        int minidx=-1;
        for(int j=i;j<v.size()-1;j++)
        {
            if(min>v[j])
            {
                min=v[j];
                minidx=j;
            }
        
        }
        swap(v[i],v[minidx]);
    }
}
int main()
{
    vector<int>v={12,02,1233,23,56,78};
    selection_sort(v);
    for(int ele:v)
    {
        cout<<ele<<" ";
    }
}