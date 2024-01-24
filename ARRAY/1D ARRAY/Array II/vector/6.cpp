#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void display(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}
int main()
{
    int n;
    vector<int> v;
    cout << "enter size of array:";
    cin >> n;
    cout << "enter element of array:" << endl;
    for (int i = 0; i < n; i++)
    {
        int q;
        cin >> q;
        v.push_back(q);
    }
    display(v);
    cout << endl;
    sort(v.begin(), v.end());
    display(v);
    int count = 0;
    cout<<endl;
    for (int i = 0; i < n; i++)
    {
        // while (i < n - 1 && v[i] == v[i + 1])
        // {
        //     count++;
        //     i++;
        // }
        // if(count>1)
        // {
        //     cout<<"unique element is"<<v[i]<<endl;
        // }
        bool flag =true;
      for(int j=0;j<n;j++)
      {
        if(j==i) continue;
        if(v[i]==v[j]){
            flag=false;
            break;
        }
      }
      if(flag==true)
      {
        cout<<v[i]<<" is unique element "<<endl;
      }
    }
    cout << endl;
}