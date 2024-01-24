#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void display(vector<int>&v)
{
    for(int ele:v)
    {
        cout<<ele<<" ";
    }
}
int main()
{
    vector<int> v={5,30,-4,2};
    display(v);
    //insertion sort
    for(int i=1;i<v.size();i++)
    {
        int j=i;
        // while(j>=1)
        // {
        //     if(v[j]>=v[j-1]) break;
        //     else
        //     {
        //         swap(v[j],v[j-1]);
        //         j--;
        //     }
        // }
        while(j>=1 && v[j]<v[j-1])
        {
            swap(v[j],v[j-1]);
            j--;
        }
    }cout<<endl;
    display(v);






}