#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void insertion(vector<int>&v)
{
    for(int i=1;i<v.size();i++)
    {
        int j=i;
        while(j>=1 && v[j-1]>v[j])
        {
            swap(v[j-1],v[j]);
            j--;
        }
    }

}
int main()
{
    vector<int>v={12,234,2,-19,89,438};
    insertion(v);
    for(int ele:v)
    {
        cout<<ele<<" ";
    }
}