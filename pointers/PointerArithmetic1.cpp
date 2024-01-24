#include<iostream>
using namespace std;
int main()
{   //adresss are stored in hexadecimal system
    //by adding some no in it 
    int x=4;
    int*ptr=&x;
    cout<<*ptr<<endl;
    ptr=ptr+1;
    cout<<*ptr<<endl;
    char ch;
    char* dh=&ch;
    cout<<ch<<" "<<dh<<dh+1<<endl;
    bool cool;
    bool* tool=&cool;
    cout<<cool<<" "<<tool<<" "<<tool+1<<endl;

}