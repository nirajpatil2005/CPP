#include <iostream>
#include <vector>
#include <string>
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
    }
    int top()
    {
        return vec[0];
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
    cout<<hp.top();
}