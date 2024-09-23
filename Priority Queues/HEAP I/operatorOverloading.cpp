#include <iostream>
#include<vector>
#include<list>
#include<queue>
#include<stack>
#include<climits>
#include<algorithm>
using namespace std;

class student
{
    public:
    string name;
    int marks;
    student(string name,int marks)
    {
        this->name=name;
        this->marks=marks;
    }
    //operator overloading 
    bool operator < (const student &obj) const{
        return this->marks < obj.marks;
    }
};
int main()
{
    priority_queue<student>pq;
    pq.push(student("aman",85));
    pq.push(student("chaman",95));
    pq.push(student("naman",90));
    cout<<"max heap:"<<endl;
    while(!pq.empty())
    {
        cout<<"top: "<<pq.top().name<<","<<pq.top().marks<<endl;
        pq.pop();
    }
    return 0;
}