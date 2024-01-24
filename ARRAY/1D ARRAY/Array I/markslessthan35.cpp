#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter no of student:";
    cin>>n;
    int marks[n];
    int i;
    for(i=0;i<n;i++)
    {
        cout<<"enter marks of "<<i+1<<" student:";
        cin>>marks[i];
    }
    for(i=0;i<n;i++)
    {
    if(marks[i]<35)
    {
        cout<<"roll no having less than 35 marks:"<<i+1<<endl;
    }
    }
    return 0;
}