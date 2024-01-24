#include <iostream>
#include <vector>
using namespace std;
void display(vector<int> &a)
{
   for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }   
}

int main()
{
    vector<int> v;
    v.push_back(3);
    v.push_back(25);
    v.push_back(90);
    v.push_back(34);
    v.push_back(59);
    v.push_back(5);
    // 3 25 90 34 59 5 
    // 5 59 34 90 25 3
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout<<endl;
    display(v);
    vector<int> v2(v.size());
    for(int i=0;i<v2.size();i++)
    {   //i+j=v.size()-1
        int j=v.size()-1-i;// logic behind reversing array
        v2[i]=v[j];
    }
    cout<<endl;
    display(v2);

    return 0;
}
