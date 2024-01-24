#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&v)
{
   for(int i=0;i<v.size();i++)
{
    cout<<v[i]<<" ";
} 
}
int main()
{
//Given an array of integers, change the value of all odd indexed elements to its second multiple
//and increment all even indexed values by 10.

vector<int> v;
int n;
cout<<"enter size of array:";
cin>>n;
cout<<"enter element of an arry:"<<endl;
for(int i=0;i<n;i++)
{
    int q;
       cin>>q;
    v.push_back(q);
 
}
cout<<endl;
display(v);
cout<<endl;
for(int i=0;i<n;i++)
{
    if(i%2==0)
    {
        v[i]=10+v[i];
    }
    else{
        v[i]=10*v[i];
    }
}
display(v);


}