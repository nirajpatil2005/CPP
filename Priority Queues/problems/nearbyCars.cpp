
#include <iostream>
#include<vector>
#include<list>
#include<queue>
#include<stack>
#include<climits>
#include<algorithm>
using namespace std;
class car
{
    int idx;
    int distsq;
    car(int idx,int distsq)
    {
        this->idx=idx;
        this->distsq=distsq;
    }
};
void nearbycars(vector<pair<int,int>>pos,int k)
{
    
}
int main()
{
    vector<pair<int,int>>pos;
    pos.push_back(make_pair(3,3));
    pos.push_back(make_pair(5,-1));
    pos.push_back(make_pair(-2,4));
    int k=2; 

    return 0;
}