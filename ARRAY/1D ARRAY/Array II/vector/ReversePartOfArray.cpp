#include <iostream>
#include <vector>
using namespace std;
void display(vector<int> &a)
{   
    for(int i=0;i<a.size()-1;i++)
    {
        cout<<a[i]<<" ";
    }

} 
void reverse(vector<int> &a)
{
    int i=0;
    int j=a.size()-1;
    while(i<=j)
    {
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;
    }
    cout<<endl;
}
void reversepart(int i, int j, vector<int> &a)
{
 
    while(i<=j)
    {
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;
    }
    cout<<endl;
}
int main()
{
    vector<int> v;
    v.push_back(17);
    v.push_back(16);
    v.push_back(153);
    v.push_back(1);
    v.push_back(13);
    display(v);
  
    reversepart(0,2,v);
    display(v);
 
    
return 0;
}
