#include<iostream>
using namespace std;
int main()
{
 int n;
 cout<<"enter no of month :";
 cin>>n;
 switch(n)
 {
    case 1:
    cout<<"31";
    break;
    case 2:
    cout<<"28/29";
    break;
    case 3:
    cout<<"31";
    break;
    case 4:
    cout<<"30";
    break;
    case 5:
    cout<<"31";
    case 6:
    cout<<"30";
    break;
    case 7:
    cout<<"31";
    break;
    case 8:
    cout<<"31";
    break;
    case 9:
    cout<<"30";
    break;
    case 10:
    cout<<"31";
    break;
    case 11:
    cout<<"30";
    case 12:
    cout<<"31";
 }   
}