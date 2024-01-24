#include <iostream>
#include <vector>
using namespace std;
void display(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}

bool isPalindrome(vector<int>&v)
{   
    bool flag="false";
    int i=0;
    int j=v.size()-1;
    while(i<=j)
    {
     if( v[i]==v[j])
     { 
      flag=true; 
        i++;
        j--;
     }
     else{
        flag=false;
        break;
     }
    }
    if(flag==true)
    {
        cout<<"this array is palindrome"<<endl;
    }
    else{
        cout<<"array is not palindrome";
    }
}
int main()
{
    int n;
    vector<int> v;
    cout<<"enter size of array:";
    cin>>n;
    cout<<"enter element of an array:";
    for(int i=0;i<n;i++)
    {
        int q;
        cin>>q;
        v.push_back(q);
    }cout<<endl;
    display(v);
    isPalindrome(v);
}