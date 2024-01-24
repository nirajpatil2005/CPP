// two pointer method
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1); // 1 0 1 0 1 1 0 1 0 1
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    int i = 0;
    int n = v.size();
    int j = n - 1;
    while (i<=j)
    {
        if(v[j]==1) j--;
        if(i>j)break;
        if(v[i]==1 && v[j]==0)
        {
            int temp=v[i];
            v[i]=v[j];
            v[j]=temp;
            i++;
            j--;
        }
             if(i>j)break;
        if(v[i]==0 && v[j]==1)
        { i++; 
        j--;
        }
             if(i>j)break;
        }
    
    cout<<endl;
      for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}