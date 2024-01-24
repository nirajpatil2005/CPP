#include<iostream>
using namespace std;
int main()
{
    int amount;
    float time,rate;
    cout<<"enter amount :"<<endl <<"enter time :"<<endl<<"enter rate :"<<endl;
    cin>> amount >>time>>rate;

   float SI=(amount*rate*time)/100 ;
   cout<<"SI is :"<<SI ;
   return 0;
}