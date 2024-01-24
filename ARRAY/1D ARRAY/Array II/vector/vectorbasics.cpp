#include<iostream>
#include<vector>
using namespace std;
int main()
{
 
    vector< int> v;
    //inserting
    v.push_back(3);   
    v.push_back(0);
    v.push_back(9);
    v.push_back(5);
    //if you want to update /acess
    v[3]=4;
    cout<<v[0];cout<<" ";
    cout<<v[1];cout<<" ";
    cout<<v[2];cout<<" ";
    cout<<v[3];cout<<" "<<endl;
    cout<<"vector size: "<<v.size()<<endl;
    cout<<"vector capacity: "<<v.capacity()<<endl;

}