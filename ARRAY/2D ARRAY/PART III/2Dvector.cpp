#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // vector<int>arr[3][4];
   
    // v1={1,2,3,} v2={4,5,6} v3={7,8,9}
    // v={{1,2,3,},{4,5,6},{7,8,9}}
    vector<int> v1;
    vector<int> v2;
    vector<int> v3;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    v2.push_back(4);
    v2.push_back(5);
    v3.push_back(6);
    v3.push_back(7);
    v3.push_back(8);
    v3.push_back(9);

    vector<vector<int>> v;
    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);
    
   //invalid cout<<v[0][5];
   //passing of vectors over arrays

}