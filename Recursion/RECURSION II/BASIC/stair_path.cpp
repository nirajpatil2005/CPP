#include <iostream>
using namespace std;
int stair(int n)
{//no of ways to climb steps when he can walk only 1 or 2 steps
    //simultaneously
    if(n==2) return 2;
    if(n==1) return 1;
    return stair(n-1)+stair(n-2);
}
int stairformax3(int n)
{
    //if we want to take 1or 2or 3 steps for climbing a stircase
    //how many ways are ??
    if(n==3)return 4;
    if(n==2)return 2;
    if(n==1)return 1;
    if(n==0)return 0;
    return stairformax3(n-1)+stairformax3(n-2)+stairformax3(n-3);
}
int main()
{
    cout<<stair(5)<<endl;
    cout<<stairformax3(5);
    return 0;
}