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
bool isarraysorted(vector<int> &v)
{
    bool flag=false;
    for(int i=1;i<v.size();i++)
    {
        if(v[i]>v[i-1])
        {
            flag=true;
        }
        else{
            flag=false;
            break;
        }
    }
    if(flag==true)
    {
        cout<<"true";
    }
    else{
     cout<<"false";
    }
}
int main()
{
    int n;
    cout << "enter size of array :";
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int q;
        cin >> q;
        v.push_back(q);
    }
    display(v);
    isarraysorted(v);
    
}