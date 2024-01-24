#include <iostream>
#include <vector>
using namespace std;
void change(vector<int> &a)//by taking ampersand before 'a' provides function by refrernce 
{
    a[0]=100;// a-> 100 12 1 2 
}
void display(vector<int> &v)
{
      for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
}
int main()
{
    vector<int> v;
    v.push_back(11);
    v.push_back(12);
    v.push_back(1);
    v.push_back(2);
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    change(v);
    display(v);




    return 0;
}