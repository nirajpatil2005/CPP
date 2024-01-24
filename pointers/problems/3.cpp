#include <iostream>
#include<ctype.h>
using namespace std;
void printodd(int no1,int no2)
{
    for(int i=min(no1,no2);i<=max(no1,no2);i++)
    {
        if(i%2==1)
        {
            cout<<i<<endl;
        }
    }
}
int main()
{   
    cout<<"odd no between two no"<<endl;
    int no1, no2;
    cout << "enter no1:";
    cin >> no1;
    cout << "enter no2:";
    cin >> no2;
    printodd(no1,no2);
    return 0;
}