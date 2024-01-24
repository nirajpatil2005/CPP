//find the last ocurrence of x
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int x,idx;
    cout<<"enter elment x:";
    cin>>x;
    vector<int> v(5);
    cout<<"enter element of vector:  ";
    for(int i=0;i<v.size();i++)
    {
        cin>>v[i];

    }
    for(int i=0;i<=v.size()-1;i++)
    {
        if(v[i]==x)
        {
            idx=i;
        
        }
    } 
    int idx1=-1;
    for(int i=v.size()-1;i>=0;i--)
      {
        if(v[i]==x)
        {
            idx1=i;
            break;
        
        }
    }
    cout<<"index :"<<idx<<" "<<idx1;
    return 0;
}