#include<iostream>
#include<vector>
// #include<algorithm>
using namespace std;
void swap(int &n1,int &n2)
{
    int temp=n1;
    n1=n2;
    n2=temp;
}
void bubbleSort(vector<int>&v)
{
    for(int i=0;i<v.size();i++)
    {
        bool flag=true;
        for(int j=0;j<v.size()-1-i;j++)
        {
            if(v[j]>v[j+1])
            {
                flag=false;
                swap(v[j],v[j+1]);
            }
        }
        if(flag)break;
    }
}
int main()
{
    vector<int>v={12,234,2,-19,89,438};
    bubbleSort(v);
    for(int ele:v)
    {
        cout<<ele<<" ";
    }

}