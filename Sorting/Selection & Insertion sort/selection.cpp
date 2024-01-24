#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
void display(vector<int> &v)
{
    // for(int i=0;i<v.size();i++)
    // {
    //     cout<<v[i]<<" ";
    // }
    for(int ele :v)
    {
        cout<<ele<<" ";
    }
}
int main()
{
    vector<int> v={5,3,4,1,2};
    display(v);cout<<endl;
    //selection sort
    for(int i=0;i<v.size();i++)
    {
        int min=INT_MAX;
        int mindex=-1;// index of minimum element
        //minimum element calculation in orange sort
        for(int j=i;j<v.size();j++)
        {
            if(min>v[j])
            {
                min=v[j];
                mindex=j;
            }
        }
        swap(v[i],v[mindex]);
      }  display(v);

}