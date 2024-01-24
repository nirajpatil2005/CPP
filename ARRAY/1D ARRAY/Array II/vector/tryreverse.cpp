#include <iostream>
#include <vector>
using namespace std;
void reverse(vector<int> &v)
{   
    int i=0;
    int j=v.size()-1;
    while(i<=j)
{
    int temp=v[i];
    v[i]=v[j];
    v[j]=temp;
    i++;
    j--;
}
}
void reversepart(int i,int j,vector<int> &v)
{
    while(i<=j)
    {   
        int temp=v[i]; 
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;
    }

}
void display(vector<int> &v)
{
      for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(7);
    display(v);
    cout<<endl;
    reverse(v);
    display(v);
    cout<<endl;
    reversepart(2,4,v);
    display(v);


}