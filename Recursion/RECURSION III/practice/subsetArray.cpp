#include<iostream>
#include<vector>
#include<string>
using namespace std;
void subsetarray(int arr[],int n,int idx,vector<int>ans)
{
    if(idx==n){
        for(int i=0;i<ans.size();i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
        return;
    }
    subsetarray(arr,n,idx+1,ans);
    ans.push_back(arr[idx]);
    subsetarray(arr,n,idx+1,ans);
}
int main()
{
    int arr[]={1,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int>v;
    subsetarray(arr,n,0,v);

}