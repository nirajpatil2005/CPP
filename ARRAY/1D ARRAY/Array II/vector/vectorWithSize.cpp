#include<iostream>
#include<vector>
using namespace std;
int main()
{
    // vector <int> v(5);
    // cout<<v.capacity()<<endl;
    // cout<<v.size()<<endl;
    // for(int i=0;i<v.size();i++)
    // {
    //     cout<<v[i]<<endl;
    // }
   
//     vector <int> v(5,7);//intial value 5,each element
//    for(int i=0;i<v.size();i++)
//     {
//         cout<<v[i]<<endl;
//     }  
    vector <int> v(5);
    for(int i=0;i<v.size();i++)
    {
        cin>>v[i];
    }
    cout<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }
    v.push_back(4);
    v.push_back(4);
    v.push_back(4);
    v.push_back(4);
     for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }
    return 0;
}