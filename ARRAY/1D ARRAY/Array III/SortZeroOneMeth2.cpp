//two pass method
#include<iostream>
#include <vector>
using namespace std;
void sort01(vector<int> &v)
{
    int noo=0;
    int noz=0;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]==1)
        {
            noo++;
        }
        else{
            noz++;
        }
    }
    //filling elements / overwrite
    for(int i=0;i<v.size();i++)
    {
        if(i<noz)v[i]=0;
        else v[i]=1; 
    }

}
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
    v.push_back(1);// 1 0 1 0 1 1 0 1 0 1
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    sort01(v);
   
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}