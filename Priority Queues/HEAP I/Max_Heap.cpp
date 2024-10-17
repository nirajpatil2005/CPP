#include <iostream>
#include<climits>
#include <vector>
#include <algorithm>
using namespace std;
class heap
{
    vector<int> vec;

public:
    void push(int val)
    {
        vec.push_back(val);

        int x = vec.size() - 1;
        int parI = (x - 1) / 2;
        while (parI >= 0 && vec[x] > vec[parI])
        {
            swap(vec[x], vec[parI]);
            x = parI;
            parI = (x - 1) / 2;
        }
    }
    void pop()
    {
        //step 1
        swap(vec[0],vec[vec.size()-1]);
        //step 2
        vec.pop_back();
        //step 3
        heapify(0,vec,vec.size());
    }
    void heapify(int i,vector<int>&vec,int n)
    {
        if(i>=vec.size())return;
        int left=2*i+1;
        int right=2*i+2;
        int maxI=i;
        if(left<n && vec[left]>vec[maxI])
        {
            maxI=left;
        }
        if(right<n && vec[right]>vec[maxI])
        {
            maxI=right;
        }
        if(maxI!=i)
        {
            swap(vec[i],vec[maxI]);
            heapify(maxI,vec,n);
        }
    }
    int top()
    {
        return vec[0];
    }
    int min()
    {
        int min=INT_MAX;
        for(int ele:vec)
        {
            if(min>ele)
            {
                min=ele;
            }
        }
        cout<<"Min: "<<min;
    }
    bool empty()
    {
        return vec.size()==0;
    }
};
int main()
{
    heap hp;
    hp.push(10);
    hp.push(-19);
    hp.push(89);
    hp.push(34);
    cout<<hp.top()<<endl;
    hp.pop();
    hp.min();
     cout<<endl<<hp.top();
}